package main

import (
	"fmt"
)

func main() {

	x := 2
	y := 3

	z := x + y
	c := y - x
	v := y * x
	b := x/2
	n := y%2

	
	fmt.Println("Sum =",z)
	fmt.Println("Sub =",c)
	fmt.Println("Mul =",v)
	fmt.Println("Div =",b)
	fmt.Println("Mod =",n)

	fmt.Println(10 + 20)
	fmt.Println(10 - 20)
	fmt.Println(10 * 20)
	fmt.Println(10 / 20)
	fmt.Println(10 % 20)

	// Logical Ops

	fmt.Println(true && true)    //   And
	fmt.Println(true && false)   //   And
	fmt.Println(true || true)    //   Or
	fmt.Println(true || false)   //   Or
	fmt.Println(!true)           //   Not


	// Increment and Decrement

	 f := 10

	fmt.Println(f)

	u := 5

	fmt.Println(u)

	u = u + 1
	fmt.Println(u)
	u += 1
	fmt.Println(u)
	u++

	o := 5
	fmt.Println(o)
	o += 2
	fmt.Println(o)
	o -= 2
	fmt.Println(o)
	o *= 2
	fmt.Println(o)
	o /= 2
	fmt.Println(o)
	o %= 2
	


	

	

}
