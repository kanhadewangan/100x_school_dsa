function combinationSumII(arr , n , target , index , current){
    if(current.lenght>  0 && target == 0){
        result.push_back(current);
        return;
    }
    for(let  i = index ; i < n ; i++){
        if(i > index && arr[i] == arr[i-1]) continue;
        if(arr[i] > target) break;
        current.push_back(arr[i]);
        combinationSumII(arr , n , target - arr[i] , i + 1 , current);
        current.pop_back();
    }
}
let result = [];
function main(){
    let arr = [10,1,2,7,6,1,5];
    let target = 8;
    let current = [];
    combinationSumII(arr , arr.length , target , 0 , current);
    for(let combination of result){
        console.log(combination.join(" "));
    }
}
main();