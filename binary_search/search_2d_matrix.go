package main

import "fmt"

func searchMatrix(matrix [][]int, target int) bool {
	if len(matrix) == 0 {
		return false
	}

	for i := 0; i < len(matrix); i++ {
		if matrix[i][0] <= target && matrix[i][len(matrix[i])-1] >= target {
			left := 0
			right := len(matrix[i]) - 1
			mid := right / 2
			for left <= right {
				if matrix[i][mid] < target {
					left = mid + 1
					mid = (left + right) / 2
				}

				if matrix[i][mid] > target {
					right = mid - 1
					mid = (left + right) / 2
				}

				if matrix[i][mid] == target {
					return true
				}
			}
		}
	}
	return false
}

func main() {
	fmt.Println(searchMatrix([][]int{{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}}, 3))
	fmt.Println(searchMatrix([][]int{{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}}, 13))
}
