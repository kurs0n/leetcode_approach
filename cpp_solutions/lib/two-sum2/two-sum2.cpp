#include "two-sum2.hpp"

std::vector<int> Solution::twoSum(std::vector<int>& numbers, int target) {
    int first = 0;
    int last = numbers.size() -  1;
    while(first < last){
        if(numbers[first] + numbers[last] == target){ 
            return std::vector<int>{first+1,last+1}; 
        }
        else if(numbers[first] + numbers[last] > target){
            last--;
        } else if(numbers[first] + numbers[last] < target){ 
            first++;
        }
    }
    return std::vector<int>{};
}