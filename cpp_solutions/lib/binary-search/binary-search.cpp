#include "binary-search.hpp"

int Solution::binarySearch(std::vector<int> &nums, int target){
    int left = 0;
    int right = nums.size() - 1;
    
    while(left < right){
        int mid = (left+right)/2;
        if(nums[mid] < target) {
            if (mid == left){
                break;
            }
            left = mid;
            continue;
        } else if(nums[mid] > target) {
            if(right == mid){ 
                break;
            }
            right = mid;
            continue;
        } 

        return mid;
    }

    if(nums[left] == target){
        return left;
    } else if (nums[right] == target){
        return right;
    }
    return -1;
}