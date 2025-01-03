package main

func search(nums []int, target int) int {
	left := 0
	right := len(nums) - 1
	mid := right / 2
	for left <= right {
		if nums[mid] < target {
			left = mid + 1
			mid = (left + right) / 2
		}

		if nums[mid] > target {
			right = mid - 1
			mid = (left + right) / 2
		}

		if nums[mid] == target {
			return mid
		}
	}

	return -1
}
