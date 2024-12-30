package main

func dailyTemperatures(temperatures []int) []int {
	res := make([]int, len(temperatures))
	stack := []int{}
	for i := 0; i < len(temperatures); i++ {
		j := len(stack) - 1
		for j >= 0 && temperatures[i] > temperatures[stack[j]] {
			res[stack[j]] = i - stack[j]
			stack = stack[:j]
			j--
		}

		stack = append(stack, i)
	}

	return res
}
