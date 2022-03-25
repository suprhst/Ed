# Russian Magma block cipher

pi0 = [12, 4, 6, 2, 10, 5, 11, 9, 14, 8, 13, 7, 0, 3, 15, 1]
pi1 = [6, 8, 2, 3, 9, 10, 5, 12, 1, 14, 4, 7, 11, 13, 0, 15]
pi2 = [11, 3, 5, 8, 2, 15, 10, 13, 14, 1, 7, 4, 12, 9, 6, 0]
pi3 = [12, 8, 2, 1, 13, 4, 15, 6, 7, 0, 10, 5, 3, 14, 9, 11]
pi4 = [7, 15, 5, 10, 8, 1, 6, 13, 0, 9, 3, 14, 11, 4, 2, 12]
pi5 = [5, 13, 15, 6, 9, 2, 12, 10, 11, 7, 8, 1, 4, 3, 14, 0]
pi6 = [8, 14, 2, 5, 6, 9, 1, 12, 15, 4, 11, 0, 13, 10, 3, 7]
pi7 = [1, 7, 14, 13, 0, 5, 8, 3, 4, 15, 10, 6, 9, 12, 11, 2]


pi = [pi0,pi1,pi2,pi3,pi4,pi5,pi6,pi7]

MASK32 = 2 ** 32 -1


# input x a 32 bit value and outs y a 32 bit value

def t(x):
    y = 0
    for i in reversed(range(8)):
        j = (x >>4 *i) &0xf
        y <<= 4
        y ^= pi[i][j]
    return y

# Rotation function 

def rot11(x):
    return((x <<11) ^ (x >> (32 - 1))) & MASK32

# x and k are 32 bit integers

def g(x,k):
    return rot11(t((x + k) % 2 ** 32))


# x is 64 bit
# returnvalue in tuple as is and left 32 bits and right 32 bits of x

def split(x):
    L = x >> 32
    R = x & MASK32
    return(L,R)

# L R are two 32 bit values
# function joins two 32 bit values and return a 64 bit value

def join(L,R):
    return(L << 32) ^ R

# Key Schedule function
# k = 286 bit key
# 32 keys of 32 bit size
# first 8 keys are from k 
# shift k over by some amount and with mask32 and grab 32 bit keys we need and add to keylist
# and next 8 keys are duplicate of this
# Final 8 keys are reverse of original 8 keys

def magma_key_schedule(k):
    keys = []
    for i in reversed(range(8)):
        keys.append((k >> (32 * i)) & MASK32)
    for i in range(8):
        keys.append(keys[i])
    for i in range(8):
        keys.append(keys[i])
    for i in reversed(range(8)):
        keys.append(keys[i])
    return keys


# ENcryption function 
# Input is 64 bit 
# key = 256 bits
# return cipher text

def magma_encrypt(x,k):
    keys = magma_key_schedule(k)
    (L,R) = split(x)
    for i in range(31):
        (L,R) = (R,L ^ g(R,keys[i]))
    return join(L ^ g(R, keys[-1]),R)

# Decryption Function 

def magma_decrypt(x,k):
    keys = magma_key_schedule(k)
    keys.reverse() # reverse keys 
    (L,R) = split(x)
    for i in range(31):
        (L,R) = (R,L ^ g(R,keys[i]))
    return join(L ^ g(R, keys[-1]),R)

