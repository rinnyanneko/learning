package main

import "fmt"

func main() {
	var memory [30000]byte
	var ptr int

	memory[ptr] += 2
	fmt.Printf("%c", memory[ptr])

	ptr++
	memory[ptr] += 3
	for memory[ptr] > 0 {
		ptr--
		memory[ptr] += 4
		ptr++
		memory[ptr] -= 2
		fmt.Printf("%c", memory[ptr])
		ptr--
		memory[ptr] += 2
		fmt.Printf("%c", memory[ptr])
		ptr++
		memory[ptr] -= 3
	}
	fmt.Printf("%c", memory[ptr])
	ptr++
	memory[ptr] -= 4
	fmt.Printf("%c", memory[ptr])

	ptr--
	memory[ptr] += 2
	fmt.Printf("%c", memory[ptr])

	ptr++
	memory[ptr] -= 3
	fmt.Printf("%c", memory[ptr])
	fmt.Printf("%c", memory[ptr])
}
