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

function gridPathsRecsion(m,n){
    if(m == 1 && n == 1) return 1;
    if(m == 0 || n == 0) return 0;
    const right = gridPathsRecsion(m,n-1);
    const down = gridPathsRecsion(m-1,n);
    return right + down;
}

function gridPaths(m,n){
    const dp = new Array(m).fill(0).map(() => new Array(n).fill(0));
    for(let i = 0 ; i < m ; i++){
        dp[i][0] = 1;
    }
    for(let j = 0 ; j < n ; j++){
        dp[0][j] = 1;
    }
    for(let i = 1 ; i < m ; i++){
        for(let j = 1 ; j < n ; j++){
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    return dp[m-1][n-1];
}

// function minimumPathSum(gird){
//     if(gird.length == 0) return 0;
//     const m = gird.length;
//     const n = gird[0].length;
//     const dp = new Array(m).fill(0).map(() => new Array(n).fill(0));
//     dp[0][0] = gird[0][0];
//     for(let i = 1 ; i < m ; i++){
//         dp[i][0] = dp[i-1][0] + gird[i][0];
//     }
//     for(let j = 1 ; j < n ; j++){
//         dp[0][j] = dp[0][j-1] + gird[0][j];
//     }
//     for(let i = 1 ; i < m ; i++){
//         for(let j = 1 ; j < n ; j++){
//             dp[i][j] = Math.min(dp[i-1][j],dp[i][j-1]) + gird[i][j];
//         }
//     }
//     return dp[m-1][n-1];
// }



function MinimumPath(grid,i,j){
    if(i == grid.length - 1 && j == grid[0].length - 1) return grid[i][j];
    if(i >= grid.length || j >= grid[0].length) return Number.MAX_VALUE;
    const right = MinimumPath(grid,i,j+1);
    const down = MinimumPath(grid,i+1,j);
    return Math.min(right,down) + grid[i][j];
}

function MinimumPathSum(grid){
    if(grid.length == 0) return 0;
    let dp = new Array(grid.length).fill(0).map(() => new Array(grid[0].length).fill(0));
    dp[0][0] = grid[0][0];
    for(let i =1;i < grid.length;i++){
        dp[i][0] = dp[i-1][0] + grid[i][0];
    }
    for(let j = 1 ; j < grid[0].length;j++){
        dp[0][j] = dp[0][j-1] + grid[0][j];
    }
    for(let i = 1 ; i < grid.length;i++){
        for(let j = 1 ; j < grid[0].length;j++){
            dp[i][j] = Math.min(dp[i-1][j],dp[i][j-1]) + grid[i][j];
        }
    }
    return dp[grid.length - 1][grid[0].length - 1];
}

function Uniquepaths(m,i,j){
    if(m.length==0) return 0;
    if(i==m.length-1 && j==m[0].length-1) return 1;
    if(i>=m.length || j>=m[0].length) return 0;
    const right = Uniquepaths(m,i,j+1);
    const down = Uniquepaths(m,i+1,j);
    return Math.max(right,down);
  
}


function TriangularGrid(grid,i,j){
    if(i == grid.length - 1) return grid[i][j];
    const down = TriangularGrid(grid,i+1,j);
    const diagonal = TriangularGrid(grid,i+1,j+1);
    return Math.min(down,diagonal) + grid[i][j];
}

function MinimumPathSumGrid(grid, i, j) {
    const m = grid.length;
    const n = grid[0].length;

    // Out of bounds
    if (i >= m || j >= n) return Infinity;

    // Bottom-right cell
    if (i === m - 1 && j === n - 1) {
        return grid[i][j];
    }

    const down = MinimumPathSumGrid(grid, i + 1, j);
    const right = MinimumPathSumGrid(grid, i, j + 1);

    return Math.min(down, right) + grid[i][j];
}


function divisorGane(n){
    let memo = {}
    if(n in memo) return memo[n];
    for(let i =1 ; i < n ; i++){
        if(n % i == 0){
            if(!divisorGane(n - i)){
                memo[n] = true;
                return true;
            }
        }
    }
    memo[n] = false;
    return false;
}

function divisorGame(n) {
    let dp = new Array(n + 1).fill(false);
    for (let i = 1; i <= n; i++) {
        for (let j = 1; j < i; j++) {
            if (i % j === 0 && !dp[i - j]) {
                dp[i] = true;
                break;
            }
        }
    }
    return dp[n];
}
function MaximunRepeatingSubstring(sequence,word,i,j){
    if(i>= sequence.length)  return 0;
    if(j >= word.length) return 1 + MaximunRepeatingSubstring(sequence,word,i+j,j);
    if(sequence[i] == word[j]){
        return MaximunRepeatingSubstring(sequence,word,i+1,j+1);
    }
    return Math.max(MaximunRepeatingSubstring(sequence,word,i+1,0),MaximunRepeatingSubstring(sequence,word,i,0));
}



function subsetSum(nums,target,index,current){
    if(target<=0) return target == 0;
    for(let i = index ; i < nums.length ; i++){
        current.push(nums[i]);
        if(subsetSum(nums,target-nums[i],i+1,current)){
            return true;
        }
        current.pop();
    }
    return false;
}


function SubsetSum(nums,target){
    let dp = new Array(nums.lenght+1).fill(false).map(() => new Array(target+1).fill(false));
    for(let i = 0 ; i <= nums.length ; i++){
        dp[i][0] = true;
    }
    for(let i = 1 ; i <= nums.length ; i++){
        for(let j = 1 ; j <= target ; j++){
            if(nums[i-1] > j){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]];
            }
        }
    }
    return dp[nums.length][target];
}





function duplicateArray(arr){
    let set = new Set();
    for(let nums of arr){
        if(set.has(nums)){
            return true;
        }
        set.add(nums);
    }
    return false;
}

function productExpectSelf(arr){
    let n = arr.length;
    let left = new Array(n).fill(1);
    let right = new Array(n).fill(1);
    let result = new Array(n).fill(1);
    for(let i = 1 ; i < n ; i++){
        left[i] = left[i-1] * arr[i-1];
    }
    for(let i = n - 2 ; i >= 0 ; i--){
        right[i] = right[i+1] * arr[i+1];
    }
    for(let i = 0 ; i < n ; i++){
        result[i] = left[i] * right[i];
    }
    return result;
}
function maxProductSubArray(nums,i,currentMax,currentMin){
    if(i>=nums.length) return currentMax;
    let tempMax = Math.max(nums[i],Math.max(currentMax * nums[i],currentMin * nums[i]));
    let tempMin = Math.min(nums[i],Math.min(currentMax * nums[i],currentMin * nums[i]));
    return maxProductSubArray(nums,i+1,tempMax,tempMin);
}
console.log(maxProductSubArray([1,2,3,4,5,0],1,1,1));

function MaxProductSubArray(nums){
   
    if(nums.lenght ==0) return 0;
    let currentMax = nums[0];
 let     currentSum = nums[0];
    for(let i = 0 ; i < nums.length ; i++){

            currentSum = Math.max(nums[i],Math.max(currentSum * nums[i],currentMax * nums[i]));
    }
    return currentMax;
}




function buySellII(prices,i,currentProfit){
    if(i >= prices.length) return currentProfit;
    let profit = 0;
    for(let j = i + 1 ; j < prices.length ; j++){
        if(prices[j] > prices[i]){
            profit = Math.max(profit,prices[j] - prices[i] + buySellII(prices,j+1,currentProfit));
        }
    }
    return Math.max(profit,buySellII(prices,i+1,currentProfit));
}

console.log(buySellII([7,1,5,3,6,4],0,0));
