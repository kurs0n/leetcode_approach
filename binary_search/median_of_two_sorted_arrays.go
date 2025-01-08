package main

import (
	"math"
)

func findMedianSortedArrays(nums1 []int, nums2 []int) float64 { // highly inspired: https://www.youtube.com/watch?v=F9c7LpRZWVQ&ab_channel=takeUforward
	n1 := len(nums1) // smaller array
	n2 := len(nums2)
	if n1 > n2 {
		return findMedianSortedArrays(nums2, nums1)
	}
	low := 0
	high := n1
	left := (n1 + n2 + 1) / 2 // how much we require on the left side
	for low <= high {
		mid1 := (low + high) / 2
		mid2 := left - mid1
		l1, l2 := -int(^uint(0)>>1)-1, -int(^uint(0)>>1)-1
		r1, r2 := int(^uint(0)>>1), int(^uint(0)>>1)
		if mid1 < n1 {
			r1 = nums1[mid1]
		}
		if mid2 < n2 {
			r2 = nums2[mid2]
		}
		if mid1-1 >= 0 {
			l1 = nums1[mid1-1] // on the left side
		}
		if mid2-1 >= 0 {
			l2 = nums2[mid2-1]
		}
		if l1 <= r2 && l2 <= r1 {
			if ((n1 + n2) % 2) == 1 {
				return math.Max(float64(l1), float64(l2))
			} else {
				return (math.Max(float64(l1), float64(l2)) + math.Min(float64(r1), float64(r2))) / 2
			}
		} else if l1 > r2 {
			high = mid1 - 1
		} else {
			low = mid1 + 1
		}
	}
	return 0.0
}

func main() {
	findMedianSortedArrays([]int{1, 2}, []int{3, 4})
}
