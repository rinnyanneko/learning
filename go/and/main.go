package main

import "fmt"

func main() {
	var a bool
	var b bool
	var c int
	var d int
	fmt.Print("Enter a: ")
	fmt.Scanln(&a)
	fmt.Print("Enter b: ")
	fmt.Scanln(&b)
	fmt.Print("Enter c: ")
	fmt.Scanln(&c)
	fmt.Print("Enter d: ")
	fmt.Scanln(&d)
	ab(a, b)
	cd(c, d)
}
func ab(a bool, b bool) {
	if a || b {
		fmt.Println("a || b are true")
	} else {
		fmt.Println("a || b are not true")
	}
	if a && b {
		fmt.Println("a && b are true")
	} else {
		fmt.Println("a && b are not true")
	}
}
func cd(c int, d int) {
	if c&d == 1 {
		fmt.Println("c & d are true")
	} else {
		fmt.Println("c & d are not true")
	}

	if c|d == 1 {
		fmt.Println("c | d are true")
	} else {
		fmt.Println("c | d are not true")
	}
}
