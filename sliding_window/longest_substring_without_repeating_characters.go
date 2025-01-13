package main

import "fmt"

func lengthOfLongestSubstring(s string) int {
	var m map[byte]int = map[byte]int{}
	left := 0
	max_len := 0
	for right := 0; right < len(s); right++ {
		m[s[right]]++
		for m[s[right]] == 2 && left < right {
			m[s[left]]--
			left++
		}
		if max_len < right-left+1 {
			max_len = right - left + 1
		}
	}
	return max_len
}

func main() {
	fmt.Println(lengthOfLongestSubstring("ynyo"))
	fmt.Println(lengthOfLongestSubstring("ohomm"))
	fmt.Println(lengthOfLongestSubstring("anviaj"))
}
