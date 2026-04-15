#include "reverseByte.hpp"

uint8_t reverseByte(uint8_t byte){
    uint8_t reversedByte = 0; 
    for(int i=0; i<8; i++){ 
        if(byte & (1<<i)){
            reversedByte |= (1<<(8-i-1)); 
        }
    }
    return reversedByte;
}