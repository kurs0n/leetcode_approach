var productExceptSelf = function(nums) {
     // two indexes 
    let prefix = [];
    let postfix = [];
    let prod = [];

    let temp = 1; 

    for(let i=0; i<nums.length; i++){
        temp = temp * nums[i];
        prefix.push(temp);
    }
     
    temp = 1; 

    for(let i=nums.length-1; i>=0; i--){
        temp = temp * nums[i];
        postfix.push(temp);
    }

    postfix.reverse();

    for(let i=0; i<nums.length; i++){ // to make it faster here
        let temp1 = 1;
        if(prefix[i-1] != undefined){
           temp1 = prefix[i-1];
        }
        let temp2 = 1;
        if(postfix[i+1] != undefined){
            temp2 = postfix[i+1];
        }
        
        prod.push(temp1*temp2);
    }
    return prod
};

console.log(productExceptSelf([-1,1,0,-3,3]));