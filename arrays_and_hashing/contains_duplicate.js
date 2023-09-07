var containsDuplicate = function(nums) {
    map = {};
    for(const num of nums){  // n
        if(map[num]){ 
            map[num]++;
        }
        else{
            map[num] = 1; 
        }
    }
    const keys = Object.keys(map);
    for(const key of keys){
        if(map[key]>=2){ 
            return true;
        }
    }
    return false;
};

console.log(containsDuplicate([1,2,3,1]));

console.log(containsDuplicate([1,2,3,4]));