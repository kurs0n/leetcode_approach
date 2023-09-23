// MY SOLUTION

// var groupAnagrams = function(strs) {
//     const countHashMap  = (temp) =>{
//         const map = {}; 
//         for(const letter of temp){
//             if(map[letter]){ 
//                 map[letter]++;
//             }
//             else{
//                 map[letter] = 1; 
//             }
//         }
//         return map;
//     };
    
//     const isAnagram = (val1,val2) =>{
//         const map1 = countHashMap(val1);
//         const map2 = countHashMap(val2); 
//         const keys1 = Object.keys(map1);
//         const keys2 = Object.keys(map2); 

//         if(keys1.length == keys2.length){  
//             for(const key of keys1){
//                 if(map1[key] != map2[key]){
//                     return false;
//                 }         
//             }
//             return true;
//         }
//         else{
//             return false;
//         }
//     };
 
//     let global_arr = [];
//     const recursionFunc=(temp)=>{
//         let val1 = temp[0];
//         const arr = []; 
//         const temp2 = [];
//         arr.push(val1);
//         for(let i=1; i<temp.length; i++){
//             if(isAnagram(val1,temp[i])){
//                 arr.push(temp[i]); 
//                 temp.push(temp[i]);
//             }
//         } 
//         global_arr.push(arr);
//         temp.shift(); 
//         for(let i=0; i<temp.length; i++){
//             const index = temp.indexOf(temp[i]);
//             temp.splice(index,1);
//         }

//         if(temp.length){
//             recursionFunc(temp); 
//         }
//     } 
//     recursionFunc(strs);
//     return global_arr; 
// };

// console.log(groupAnagrams(["eat","tea","tan","ate","nat","bat"]));


var groupAnagrams = function(strs){  
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

    const isAnagram = (val1,val2) =>{
        const map1 = countHashMap(val1);
        const map2 = countHashMap(val2); 
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

    const values = [];
     
    const ret_arr = [];
    
    for(let i=0; i<strs.length; i++){
        const temp = [];
        if(values.indexOf(strs[i])==-1){
            values.push(strs[i]); 
            temp.push(strs[i]);
        }
        for(let j=i+1; j<strs.length; j++){
            if((isAnagram(strs[i],strs[j])&&values.indexOf(strs[j])==-1) || (isAnagram(strs[i],strs[j])&&strs[i]===strs[j]
            // && one more condition in case of ["","",""]
            )){ 
                values.push(strs[j]);
                temp.push(strs[j]);
            }
        }
        if(temp.length){
            ret_arr.push(temp);
        }
    } 
    return ret_arr;    
}

console.log(groupAnagrams(["",""])); //interesting case