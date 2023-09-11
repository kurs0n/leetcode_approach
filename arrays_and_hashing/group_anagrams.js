var groupAnagrams = function(strs) {
    const countHashMap  = (temp) =>{
        const map = {}; 
        for(const letter of temp){
            if(map[letter]){ 
                map[letter]++;
            }
            else{
                map[letter] = 1; 
            }
        }
        return map;
    };

    
};