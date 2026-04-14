#include "merge-two-sorted-arrays.hpp"

std::vector<int>* Solution::mergeTwoArrays(std::vector<int> *sorted1, std::vector<int> *sorted2){
    int i = 0;
    int j = 0;
    std::vector<int>* newVector = new std::vector<int>();

    while(i < sorted1->size() && j < sorted2->size()){
        if(sorted1->at(i) > sorted2->at(j)){
            newVector->push_back(sorted2->at(j));
            j++;
        } else {
            newVector->push_back(sorted1->at(i));
            i++;
        }
    }
    
    while(i < sorted1->size()){
        newVector->push_back(sorted1->at(i));
        i++;    
    }

    while(j < sorted2->size()){
        newVector->push_back(sorted2->at(j));
        j++;
    }

    return newVector;
}