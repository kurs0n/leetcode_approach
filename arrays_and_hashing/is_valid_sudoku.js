var isValidSudoku = function(board) {

    const resetHashMap=()=>{
        return {
            "1": 0,
            "2": 0,
            "3": 0,
            "4": 0, 
            "5": 0,
            "6": 0, 
            "7": 0, 
            "8": 0,
            "9": 0, 
            ".": 0
        };
    }

    const hashMapIsCorrect = (hashMap)=>{
        const keys = Object.keys(hashMap);
        delete hashMap["."];
        for(const key of keys){
            if(hashMap[key]>=2){
                return false;
            }
        }
        return true;
    }
    
    // checking 3x3   
    let hashMap = { 
        "1": 0,
        "2": 0,
        "3": 0,
        "4": 0, 
        "5": 0,
        "6": 0, 
        "7": 0, 
        "8": 0,
        "9": 0, 
        ".": 0
    };

    let i=0; 
    let j=0; 

    for(let temp=0; temp<3; temp++){ // check 3x3
        for(let temp2=0; temp2<3; temp2++){
            for(let a=i; a<i+3; a++){ 
                for(let b=j; b<j+3; b++){
                    hashMap[board[a][b]]+=1;
                }
            } 
            if(!hashMapIsCorrect(hashMap)){
                return false;
            }
            hashMap = resetHashMap();
            i+=3;
            i%=9; 
        } 
        j+=3;
    }

    hashMap = resetHashMap();
         
    // horizontally 
    i=0;
    j=0;

    for(i=0; i<9; i++){
        for(j=0;j<9;j++){
            hashMap[board[i][j]]+=1;
        }
        if(!hashMapIsCorrect(hashMap)){
            return false;
        }
        hashMap = resetHashMap();
    }

    hashMap = resetHashMap();
    

    // vertically  
    i=0;
    j=0;
    
    for(i=0; i<9; i++){
        for(j=0;j<9;j++){
            hashMap[board[j][i]]+=1;
        }
        if(!hashMapIsCorrect(hashMap)){
            return false;
        }
        hashMap = resetHashMap();
    }
        
    return true;
};

console.log(isValidSudoku(
    [["8","3",".",".","7",".",".",".","."]
    ,["6",".",".","1","9","5",".",".","."]
    ,[".","9","8",".",".",".",".","6","."]
    ,["8",".",".",".","6",".",".",".","3"]
    ,["4",".",".","8",".","3",".",".","1"]
    ,["7",".",".",".","2",".",".",".","6"]
    ,[".","6",".",".",".",".","2","8","."]
    ,[".",".",".","4","1","9",".",".","5"]
    ,[".",".",".",".","8",".",".","7","9"]]
));