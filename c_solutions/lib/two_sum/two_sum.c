#include "two_sum.h"


struct hashMap {
    int key;
    int value;
};


struct hashMap* linearSearch(struct hashMap* data, int size, int key){ // O(n)
    for(int i = 0; i<size; i++){
        if(data[i].key == key){
            return &data[i];
        }
    } 
    return NULL;
}

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) { 
    struct hashMap *data = malloc(sizeof(struct hashMap) * numbersSize);
    int *result = NULL;
    for(int i=0; i<numbersSize; i++){
        struct hashMap *exist = linearSearch(data, numbersSize, target - numbers[i]); 
        
        if(exist != NULL){
            result = malloc(sizeof(int) * 2);
            *returnSize = 2;
            result[0] = exist->value;
            result[1] = i;
            return result;
        }
        data[i].key=numbers[i];
        data[i].value=i;
    }
    *returnSize = 0;
    return result;
}
