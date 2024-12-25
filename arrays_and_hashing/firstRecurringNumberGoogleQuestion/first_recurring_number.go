package main

import "fmt"

func returnFirstRecurringNumber(arr []int) *int {
	m := make(map[int]int)
	for _, v := range arr {
		if _, ok := m[v]; ok {
			return &v
		} else {
			m[v] = 1
		}
	}
	return nil
}

func main() {
	fmt.Println(*returnFirstRecurringNumber([]int{2, 5, 1, 2, 3, 5, 1, 2, 4}))
	fmt.Println(*returnFirstRecurringNumber([]int{2, 1, 1, 2, 3, 5, 1, 2, 4}))
	fmt.Println(*returnFirstRecurringNumber([]int{2, 3, 4, 5}))
}
