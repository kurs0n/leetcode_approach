package main

import "fmt"

func maxProfit(prices []int) int {
	bp := prices[0]
	profit := 0
	for i := 1; i < len(prices); i++ {
		if prices[i] < bp {
			bp = prices[i]
		}
		if profit < (prices[i] - bp) {
			profit = prices[i] - bp
		}
	}
	return profit
}

func main() {
	fmt.Println(maxProfit([]int{7, 1, 5, 3, 6, 4}))
}
