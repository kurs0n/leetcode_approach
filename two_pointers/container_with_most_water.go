package main

func maxArea(height []int) int {
	a_point := 0
	b_point := len(height) - 1
	max_area := 0
	for a_point < b_point {
		if height[a_point] > height[b_point] {
			max_area = max(max_area, height[b_point]*(b_point-a_point))
			b_point--
		} else {
			max_area = max(max_area, height[a_point]*(b_point-a_point))
			a_point++
		}
	}
	return max_area
}
