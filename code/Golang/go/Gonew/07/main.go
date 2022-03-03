package main

import "fmt"



func main() {
	i:=0

	for i<5 {
		fmt.Printf("%d. Hello\n",i)
		i++ // or i += 1
	}

	for x:=0;x<5;x++ {
		fmt.Println(x)
	}
}