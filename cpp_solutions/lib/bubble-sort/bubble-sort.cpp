#include "bubble-sort.hpp"

void bubbleSort(std::vector<int> *vec){
    for (int i=0; i<vec->size() - 1; i++){
        for (int j=0; j<vec->size() - i - 1; j++){ 
            if(vec->at(j) > vec->at(j+1)){
                int temp = vec->at(j);
                vec->at(j) = vec->at(j+1);
                vec->at(j+1) = temp;
            }
        }
    }
}
