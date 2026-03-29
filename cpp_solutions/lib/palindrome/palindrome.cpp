#include "palindrome.hpp"

bool Solution::isPalindrome(std::string s){
    std::string t;
    t.reserve(s.size());

    for(const char c : s){
        if(std::isalnum(static_cast<unsigned char>(c))){
            t+= static_cast<char>(std::tolower(c, std::locale()));
        }
    }
    
    int i=0;
    int j=(t.length())-1;

    while(i < j){
        if(t[i] != t[j]){
            return false;
        }
        i++;
        j--;
    }

    return true;
}
 
