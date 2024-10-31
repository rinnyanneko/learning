package main

import "fmt"

func main() {
	var x int
	var y int
	fmt.Print("Please enter a number: ")
	fmt.Scanln(&x)
	fmt.Print("Please enter another number: ")
	fmt.Scanln(&y)
	var result int
	result = x * y
	fmt.Println(x, "*", y, "=", result)
}
