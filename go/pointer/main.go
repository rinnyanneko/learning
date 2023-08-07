package main

import "fmt"

func main() {
	var a int
	var b int
	fmt.Print("Enter a number: ")
	fmt.Scanln(&a)
	fmt.Print("Please enter another number: ")
	fmt.Scanln(&b)
	var aPtr *int = &a
	var bPtr *int = &b
	var result int
	var resultPtr *int = &result
	add(aPtr, bPtr, resultPtr)
	fmt.Println("The sum of the two numbers is:", result)
}
func add(aPtr *int, bPtr *int, resultPtr *int) {
	*resultPtr = *aPtr + *bPtr
}
