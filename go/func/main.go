package main

import "fmt"

func main() {
	var a int
	var b int
	var result int
	fmt.Print("Enter first number: ")
	fmt.Scanln(&a)
	fmt.Print("Enter second number: ")
	fmt.Scanln(&b)
	result = calculate(a, b)
	fmt.Println("Result:", result)
}

func calculate(a int, b int) int {
	var result int
	result = a * b
	return result
}
