/**
 * @param {string[]} tokens
 * @return {number}
 */
var evalRPN = function(tokens) {
	const stack = []
	for (let i=0; i< tokens.length; i++){
		switch(tokens[i]){
			case "+": {
				const number2 = stack.pop();
				const number1 = stack.pop();
				const result = parseInt(number1) + parseInt(number2);
				stack.push(result); 
				break;
			}
			case "-": {
				const number2 = stack.pop();
				const number1 = stack.pop();
				const result = parseInt(number1) - parseInt(number2);
				stack.push(result); 
				break;
			}
			case "/": {
				const number2 = stack.pop();
				const number1 = stack.pop();
				const result = parseInt(number1) / parseInt(number2);
				stack.push(result); 
				break; 
			}
			case "*":{
				const number2 = stack.pop();
				const number1 = stack.pop();
				const result = parseInt(number1) * parseInt(number2);
				stack.push(result); 
				break;
			}
			default: {
				stack.push(tokens[i]);  
				break;
			}
		}
	}
	return parseInt(stack[0])
};