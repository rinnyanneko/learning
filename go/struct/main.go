package main

import "fmt"

type Person struct {
	name string
	age  int
}

func main() {
	var p1 Person = Person{"Rin", 15}
	fmt.Println("My name is", p1.name)
	fmt.Println(p1.age, "years old")
}
