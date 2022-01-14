package main

import "fmt"


func main(){

	var a int
	a = 25

	changeValue(a)

	changrReferernce(&a)

	
}

func changeValue(val int){
	fmt.Println(val)
	val = 20
	fmt.Printf("A inside chgval func %d\n",val)

}

func changrReferernce(val *int) {
	fmt.Println(val)
	*val = 200
	fmt.Println("A inside change ref : ",val)
}