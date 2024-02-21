function isPalindrome(s: string): boolean {
    const formatString = (s3: string): string=>{ 
        let temp = s3.toLowerCase();
        return temp.replace(/[^a-z0-9]/gi, '');
    };
    const reverseString = (s2: string): string=>{
        let i: number = 0; 
        let j: number = s2.length-1;
        let string_copy: Array<string> = s2.split("");
    
        while(i<j){
            const temp = string_copy[j];
            string_copy[j] = string_copy[i];
            string_copy[i] = temp;
            i++;
            j--;
        }
        
        return string_copy.join("");
    };

    const reversedString = reverseString(s);
    if(formatString(reversedString) === formatString(s)){
        return true;
    }
    else{
        return false;
    }
}; 
