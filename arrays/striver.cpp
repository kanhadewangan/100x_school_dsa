#include<bits/stdc++.h>
using namespace std;

int kadane(vector<int>& nums) {

        long long maxi = LLONG_MIN; 
        
        // current sum of subarray
        long long sum = 0; 
        
        // Iterate through the array
        for (int i = 0; i < nums.size(); i++) {
            
            // Add current element to the sum
            sum += nums[i]; 
            
            // Update maxi if current sum is greater
            if (sum > maxi) {
                maxi = sum; 
            }
            
            // Reset sum to 0 if it becomes negative
            if (sum < 0) {
                sum = 0; 
            }
        }
        
        // Return the maximum subarray sum found
        return maxi;
    }

    int buyStock(vector<int>&prices){
        int minPrice = INT_MAX; 
        int maxProfit = 0; 
        
        for(int i =0; i<prices.size();i++){
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }        
        return maxProfit;
    }
    void arrangeArray(vector<int>&arr, int n){
        int positiveIndex = 0;
        int negativeIndex = 1;
        for(int i=0; i<n; i++){
            if(arr[i] >= 0){
                arr[positiveIndex] = arr[i];
                positiveIndex += 2;
            }
            else{
                arr[negativeIndex] = arr[i];
                negativeIndex += 2;
            }
        }
        for(int i =0; i<n; i++){
            cout << arr[i] << " ";
        }
    }

    void leaders(vector<int>&arr, int n){
        vector<int> leaders;
        int maxFromRight = arr[n-1];
        leaders.push_back(maxFromRight);
        for(int i = n-2; i>=0; i--){
            if(arr[i] > maxFromRight){
                maxFromRight = arr[i];
                leaders.push_back(maxFromRight);
            }
        }
        reverse(leaders.begin(), leaders.end());
        for(int leader : leaders){
            cout << leader << " ";
        }
    }


//  int LongestConsecutiveSequence(vector<int>&arr,int n){
//     unordered_set<int> s;
//     for(int i =0; i<n; i++){
//         s.insert(arr[i]);
//     }
//     int longestStreak = 0;
//     int currentStreak = 1;

//     for(int i =0; i<n; i++){
//         if(!s.count(arr[i]-1)){
//             int currentNum = arr[i];
//             while(s.count(currentNum + 1)){
//                 currentNum += 1;
//                 currentStreak += 1; 
//                 cout<<s.count(currentNum) << "s.cpunt "<<endl;
//                 cout << currentNum << "Curren "<<endl;
//             }}
//             longestStreak = max(longestStreak, currentStreak);
//  }
//     return longestStreak;
// }


void LonestConseq(vector<int>&arr,int n){
    unordered_set<int>s;
    for(auto x:arr){
        s.insert(x);
    }
    int currentStreak =1;
    int longestStreak = 0;
    for(int i =0; i<n; i++){
        if(!s.count(arr[i]-1)){
            int CurrentNum = arr[i];
            while(s.count(CurrentNum+1)){
                CurrentNum +=1;
                currentStreak +=1;
                longestStreak = max(longestStreak,currentStreak);
            }
        }
    }
    cout << longestStreak << endl;
}

void nextPermutation(vector<int>&arr,int n){
    int index =-1;
    for(int i = arr.size()-2; i>=0; i--){
        if(arr[i]<arr[i+1]){
            index = i;
            break;
        }
    }
    if(index ==-1){
        reverse(arr.begin(), arr.end());
        cout << "Next Permutation: ";
        for(int num : arr){
            cout << num << " ";
    }
    cout << endl;
    return;
    }
    for (int  i = arr.size()-1; i >=0; i--)
    {
        if(arr[i]>arr[index]){
            swap(arr[i], arr[index]);
            break;
        }
    }
    reverse(arr.begin()+index+1, arr.end());
    cout << "Next Permutation: ";
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;
}
int subArraySum(vector<int>&arr,int target){
    int sum = 0;
    int start = 0;
    int end = arr.size()-1;
    while(start<=end){
        sum += arr[end];
        if(sum == target){
            return end;
        }
        else if (sum > target){
            sum -= arr[end];
            end--;
        }
        else{
            start++;
        }
    }
    return -1;
}

void solver(vector<int>&arr, int target, int index, vector<int>&current, vector<vector<int>>&result){
    if(target == 0){
        result.push_back(current);
        return;
    }
    for(int i = index; i<arr.size(); i++){
        if(i>index && arr[i] == arr[i-1]){
            continue;
        }
        if(arr[i] > target){
            break;
        }
        current.push_back(arr[i]);
        solver(arr, target-arr[i], i+1, current, result);
        current.pop_back();
    }
}

void combinationSum(vector<int>&arr, int target, int index){
    vector<vector<int>> result;
    vector<int> current;
    sort(arr.begin(), arr.end());
    solver(arr, target, index, current, result);
    cout << "Combinations that sum to " << target << ": " << endl;
    for(const auto& combination : result){
        for(int num : combination){
            cout << num << " ";
        }
        cout << endl;
    }
}

void helper(int index, int target, vector<int>& curr, vector<int>& nums, vector<vector<int>>& result) {
    if (target == 0) {
        result.push_back(curr);
        return;
    }

    for (int i = index; i < nums.size(); i++) {

        // Skip duplicates at same level
        if (i > index && nums[i] == nums[i - 1]) continue;

        if (nums[i] > target) break;

        curr.push_back(nums[i]);
        helper(i + 1, target - nums[i], curr, nums, result);
        curr.pop_back();
    }
}


void SubsetSum(vector<int>& arr, int target) {

    sort(arr.begin(), arr.end());

    vector<vector<int>> result;
    vector<int> current;

    helper(0, target, current, arr, result);

    cout << "Subsets that sum to " << target << ":\n";
    for (auto& subset : result) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }
}


    int main(){
        vector<int> arr  ={5,2,1};
        int target = 3;
         SubsetSum(arr, target);
         return 0;

}
