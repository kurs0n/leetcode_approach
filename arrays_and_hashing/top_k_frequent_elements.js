var topKFrequent = function(nums, k) {
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

    const map = countHashMap(nums);
    
    const sortable = [];
    for(const num in map){
        sortable.push([num,map[num]]);
    }
    sortable.sort((a,b)=>{
        return b[1]-a[1]; 
    });

    const res = [];
    for(let i=0; i<k; i++){
        res.push(parseInt(sortable[i][0]));
    }
    return res;
};

console.log(topKFrequent([1],1));