package main

import "fmt"


func main() {

	// Arrays 

	// Arrays are precise

var arrayOne[5] int

fmt.Println(arrayOne)

// Print indvidual value 

fmt.Println(arrayOne[0])
fmt.Println(arrayOne[1])
fmt.Println(arrayOne[2])
fmt.Println(arrayOne[3])
fmt.Println(arrayOne[4])

// Adding value to array 

arrayOne[0] = 10

fmt.Println(arrayOne)

arrayOne[4] = 25

fmt.Println(arrayOne)

// Declare and initialize array

arrayTwo := [5] int {1,2,3,4,5}

fmt.Println(arrayTwo)

arrayThree := [5] int {2,3}

 

fmt.Println(arrayThree)

// String Array

var strArray[5] string
fmt.Println(strArray)

// Length 

fmt.Println(len(strArray))

// Boolean Array

var boolArray[5] bool

fmt.Println(boolArray)

// Length

fmt.Println(len(boolArray))

// 2D Arrays

var array2D[6][6] int 

for i:=0;i<6;i++ {
	for j:=0;j<6;j++{
		array2D[i][j] = i*j
	}
}


fmt.Println(array2D)




}