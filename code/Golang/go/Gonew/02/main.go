package main

import (
	"fmt"
	"reflect"
)

func main() {
	fmt.Println("Hello World !")

	// Automatic variable assignment

	var a = "Hello"

	fmt.Println(reflect.ValueOf(a))

	fmt.Println(reflect.TypeOf(a))

	var b = 10

	fmt.Println(reflect.ValueOf(b))

	fmt.Println(reflect.TypeOf(b))

	// Manual variable asignment

	var c int8 = 25

	fmt.Println(reflect.ValueOf(c))

	fmt.Println(reflect.TypeOf(c))

	var d float32 =2.666

	fmt.Println(reflect.ValueOf(d))

	fmt.Println(reflect.TypeOf(d)) 

	var e float64 = 45.65

	fmt.Println(reflect.ValueOf(e))

	fmt.Println(reflect.TypeOf(e))

	// Another way of assigning variable

	x := 10

	fmt.Println(reflect.ValueOf(x))

	fmt.Println(reflect.TypeOf(x))

	y := 200

	fmt.Println(y)

	y = 5

	fmt.Println(y)

	// Constants 

	const PI = 3.141592

	fmt.Println("Value of pi = ",PI)

	// Booleans

	i := true
	h := false
	fmt.Println(reflect.TypeOf(i))
	fmt.Println(reflect.TypeOf(h))
	fmt.Println("",i,"\n",h)












}
