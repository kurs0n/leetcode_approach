package main

import "fmt"

// left -> (, right -> )
// 0,0
// 1,0 -> (    -->  // 1,1 --> ()
// 2,0 -> ((    // 2,1 --> ()(
// 2,1 -> (()	// 2,2 --> ()()
// 2,2 -> (())

func backtrack(left int, right int, current string, res *[]string, length int) {

	if len(current) == length*2 { //4
		*res = append(*res, current)
		return
	}

	if left < length {
		backtrack(left+1, right, current+"(", res, length)
	}

	if right < left {
		backtrack(left, right+1, current+")", res, length)
	}
}

func generateParenthesis(n int) []string {
	res := []string{}
	backtrack(0, 0, "", &res, n)

	return res
}

func main() {
	fmt.Println(generateParenthesis(3))
}
