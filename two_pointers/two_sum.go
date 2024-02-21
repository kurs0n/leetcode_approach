package main
import "fmt"
func twoSum(numbers []int, target int) []int {
  pointer1 := 0 
  pointer2 := len(numbers) - 1

  for true { 
    if pointer1 == pointer2 { 
      pointer1++ 
      pointer2= len(numbers) - 1
      continue
    }
    if numbers[pointer1]+numbers[pointer2] == target { 
      break
    }
    pointer2--
  }

 
  returnarray :=  []int{pointer1+1,pointer2+1}
  
  
 return returnarray
} 
func main(){
 fmt.Println( twoSum([]int{3,3,2,10},13))  
}
/*
Input: numbers = [2,7,11,15], target = 9
Output: [1,2] 
Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2]. */
