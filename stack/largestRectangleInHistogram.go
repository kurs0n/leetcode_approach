package main

import (
	"fmt"
)

func largestRectangleArea(heights []int) int {
	stack := []int{-1}
	max := 0
	for i := 0; i < len(heights); i++ {
		if len(stack) == 1 {
			stack = append(stack, i)
		} else {
			if heights[stack[len(stack)-1]] >= heights[i] {
				for stack[len(stack)-1] != -1 && heights[stack[len(stack)-1]] >= heights[i] {
					height := heights[stack[len(stack)-1]]
					stack = stack[:len(stack)-1]
					width := i - stack[len(stack)-1] - 1
					if height*width > max {
						max = height * width
					}
				}
				stack = append(stack, i)
			} else {
				stack = append(stack, i)
			}
		}
	}

	for stack[len(stack)-1] != -1 {
		height := heights[stack[len(stack)-1]]
		stack = stack[:len(stack)-1]
		width := len(heights) - stack[len(stack)-1] - 1
		if height*width > max {
			max = height * width
		}
	}

	return max
}

func main() {
	fmt.Println(largestRectangleArea([]int{2, 1, 5, 6, 2, 3}))
	fmt.Println(largestRectangleArea([]int{2, 4}))
	fmt.Println(largestRectangleArea([]int{1, 1}))
	fmt.Println(largestRectangleArea([]int{4, 2}))
	fmt.Println(largestRectangleArea([]int{2, 3}))
	// fmt.Println(largestRectangleArea([]int{2}))
	// fmt.Println(largestRectangleArea([]int{2, 1, 2}))

}
