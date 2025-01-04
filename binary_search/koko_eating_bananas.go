package main

import (
	"fmt"
	"math"
	"slices"
)

func minEatingSpeed(piles []int, h int) int {
	minSpeed := 0
	left, right := 1, slices.Max(piles)

	for left <= right {
		mid := left + (right-left)/2
		totalHours := 0
		for i := 0; i < len(piles); i++ {
			totalHours += int(math.Ceil(float64(piles[i]) / float64(mid)))
		}
		if totalHours <= h {
			minSpeed = mid
			right = mid - 1
		} else {
			left = mid + 1
		}
	}

	return minSpeed
}

func main() {
	fmt.Println(minEatingSpeed([]int{3, 6, 7, 11}, 8))
	fmt.Println(minEatingSpeed([]int{312884470}, 312884469))
	fmt.Println(minEatingSpeed([]int{312884470}, 968709470))
}
