#include <stdio.h>
#include <string.h>

void reverseString(char *str){
    int len = strlen(str);
    int limit = (int)len/2;
    for(int i=0; i<limit; i++){
        char temp = str[i];
        str[i] = str[(len-1)-i];
        str[(len-1)-i] = temp;
    }
}

int main(){
    char str[100] = "hodak";
    reverseString(str);
    printf(str);
    return 0;
}
