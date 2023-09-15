var longestConsecutive = function(nums) {
    nums.sort((a,b)=>{
        return a-b;
    }); 
 // hash map?
    let longest = 0;
    const lengths = []; 
    for(let i=0; i<nums.length; i++){ 
        if(nums[i] != undefined){
            if(nums[i]== nums[i+1]-1){
                longest++;
            }
            else if(
                nums[i] == nums[i+1]
            ){ 
                continue;
            }
            else{ 
                longest++;
                lengths.push(longest); 
                longest = 0;
            }
        }
    }
    // console.log(nums);
    lengths.push(longest);
     
    return Math.max(...lengths);

};
console.log(longestConsecutive([1,2,0,1]));