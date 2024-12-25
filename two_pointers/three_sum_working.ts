class Solution {
    /**
     * @param {number[]} nums
     * @return {number[][]}
     */
    threeSum(nums: number[]) {
        nums.sort((a, b) => b - a);
        let s = new Set<string>();
        let result: number[][] = [];
         
        for(let i = 0; i < nums.length - 2; i++) {
            const a = nums[i]; 
            let b_point = i + 1; 
            let c_point = nums.length - 1;
            while(b_point < c_point) { 
            if (a + nums[b_point] + nums[c_point] === 0) {
                const triplet = [a, nums[b_point], nums[c_point]].sort((a, b) => a - b); // not the best approach
                s.add(JSON.stringify(triplet));
                b_point++;
                c_point--; 
            } else if(nums[b_point] + nums[c_point] < -a) {
                c_point--;
            } else {
                b_point++;
            }
            }
        }

        s.forEach(triplet => result.push(JSON.parse(triplet)));

        return result;
    }
}


const zaluzja = new Solution();
console.log(zaluzja.threeSum([-1, 0, 1, 2, -1, -4])); // [[-1, -1, 2], [-1, 0, 1]]
console.log(zaluzja.threeSum([0,0,0,0])); // []
console.log(zaluzja.threeSum([-1,0,1,2,-1,-4,-2,-3,3,0,4])); // [[0,0,0]]
console.log(zaluzja.threeSum([-4,-2,-2,-2,0,1,2,2,2,3,3,4,4,6,6])); // [[-2,-1,3],[-2,0,2],[-1,0,1]]