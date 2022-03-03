package main

import "fmt"

func main() {


	// Slices (like lists in python)

	sliceOne := make([]string,5) // slice := make([]type,size)

	fmt.Println(sliceOne)

	sliceTwo := make([]int,5)

	fmt.Println(sliceTwo)

	//

	sliceOne[0] = "A"
	fmt.Println(sliceOne)



	// Append

	fmt.Println(len(sliceTwo))

	sliceTwo =append(sliceTwo, 20) // Add single

	fmt.Println(sliceTwo)

	fmt.Println(len(sliceTwo))

	sliceTwo =append(sliceTwo, 20,30,40,50,60) // Add Multiple

	fmt.Println(sliceTwo)

	// Slice Copy

	sliceThree := make([]int,4)
	sliceThree[0] = 1
	sliceThree[1] = 2
	sliceThree[2] = 3
	sliceThree[3] = 4

	fmt.Println(sliceThree)

	sliceCopy := make([]int,len (sliceThree)) // Create a new slice of same size

	fmt.Println(sliceCopy) // print before copying

	copy(sliceCopy,sliceThree) // Copy the contents of one slice to another (makes an actual copy not a reference to other slice)

	fmt.Println(sliceCopy) // Print after Copying

	// Proof

	sliceCopy[2] = 200

	fmt.Println(sliceThree)
	fmt.Println(sliceCopy)

	// Slicing Operator

	fmt.Println(sliceCopy[1:3]) // [x:y] specifies range for slicing

	fmt.Println(sliceCopy[:3]) // can be done to slice from begining
	
	fmt.Println(sliceCopy[1:]) // to end 






}
