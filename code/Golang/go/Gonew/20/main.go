package main

import "fmt"

//Structs

type a struct {
	value int
	units int
	brand string
	avail bool
}


func main(){
	
	item_one := a{brand:"Tria",value: 1,units: 5,avail: true}

	fmt.Println(item_one)
	fmt.Println(item_one.brand)

}
