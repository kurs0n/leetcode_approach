var isAnagram = function(s, t) {
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
     
    const map1 = countHashMap(s);
    const map2 = countHashMap(t); 

    const keys1 = Object.keys(map1);
    const keys2 = Object.keys(map2);
    if(keys1.length == keys2.length){  
        for(const key of keys1){
            if(map1[key] != map2[key]){
                return false;
            }         
        }
        return true;
    }
    else{
        return false;
    }

}; 

