package main

import "fmt"



func main(){

	// Maps (similar to dictionary in python)


	mapOne := make(map[string]int)

	mapOne["ID"] = 1
	mapOne["pass"] = 1234

	fmt.Println(mapOne)

	fmt.Println(mapOne["ID"])
	fmt.Println(mapOne["pass"])

	delete(mapOne,"ID")

	fmt.Println(mapOne)




}