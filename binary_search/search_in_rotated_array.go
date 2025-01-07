package main

func search(nums []int, target int) int {
	left := 0
	right := len(nums) - 1

	for left <= right {

		mid := (left + right) / 2

		if nums[mid] == target {
			return mid
		}

		if nums[left] <= nums[mid] {
			// sorted correctly
			if nums[left] <= target && target < nums[mid] {
				right = mid - 1
			} else {
				left = mid + 1
			}
		} else {
			if nums[mid] < target && target <= nums[right] {
				left = mid + 1
			} else {
				right = mid - 1
			}
		}
	}
	return -1
}

// func main() {
// 	fmt.Println(search([]int{4, 5, 6, 7, 0, 1, 2}, 0))
// 	fmt.Println(search([]int{4, 5, 6, 7, 0, 1, 2}, 3))
// 	fmt.Println(search([]int{1, 3}, 3))
// 	fmt.Println(search([]int{3, 1}, 1))
// }
