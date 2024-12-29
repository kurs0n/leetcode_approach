class Solution {
    /**
     * @param {string} s
     * @return {boolean}
     */
    isValid(s) {
        const temp = [];
        const map = {
            '(': ')',
            '{': '}',
            '[': ']'
        };
        s.split('').forEach((char) => {
            temp.push(char);
        });
        if (temp.length % 2 !== 0) {
            return false;
        } 
        const stack = [];
        for (let i = 0; i < temp.length; i++) {
            if (temp[i] === '(' || temp[i] === '{' || temp[i] === '[') {
                stack.push(temp[i]);
            }
            else {
                const sign = stack.pop();
                if (temp[i] !== map[sign]) {
                    return false;
                }
            }
        }
        if (stack.length > 0) {
            return false;
        }
        return true;
    } 
}


s = new Solution();

console.log(s.isValid("{[()]}")); // true
console.log(s.isValid("()[]{}")); // true
console.log(s.isValid("(]")); // false
console.log(s.isValid("(("));
