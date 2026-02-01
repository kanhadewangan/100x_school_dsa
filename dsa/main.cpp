#include<bits/stdc++.h>
using namespace std;


// void sorted(vector<int> & arr){
//     bool isSorted = false;
//     for(int i =0; i<arr.size()-1; i++){
//         for(int j =0; j<arr.size()-i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 isSorted = true;
//             }
//         }
//     }
//     if(isSorted){
//         sort(arr.begin(), arr.end());
//     }


// }


// void leftRotation(vector<int> &arr){
//     int first = arr[0];
//     for(int i =0; i<arr.size()-1; i++){
//         arr[i] = arr[i+1];}
//     arr[arr.size()-1] = first;
//     for(int num : arr){
//         cout << num << " ";
//     }
// }

// void reverse(vector<int>&arr,int start, int end){
//     while(start<end){
//         swa(arr[start],arr[end])
//         start++;
//         end--;
//     }
// }

// void leftRotationDplace(vector<int>&arr,int d, int k){
//     int n = arr.size();

//     if(n==0 || k==0) return arr;
    
//     k= k%n;
//     reverse(arr,0,k-1);
//     reverse(arr,k,n-1);
//     reverse(arr,0,n-1)


//     return arr;
// }

 void moveZeroEnd(vector<int>&arr){
    int count =0;
    for(int i =0; i<arr.size(); i++){
        if(arr[i] != 0){
            //copy non zero elements at the front

            arr[count++] = arr[i];
        }
    }
    while(count < arr.size()){
        //fill remaining elements with zero
        arr[count++] = 0;
    }
}

void linearSearch(vector<int>&nums,int val){
    for(int i =0; i<nums.size(); i++){
        if(nums[i] == val){
            cout << "Element found at index: " << i << endl;
            return;
        }
    }
    cout << "Element not found" << endl;
}

void maxConse(vector<int>&nums){
    int maxCount =0;
    int count =0;
    for(int i =0; i<nums.size(); i++){
        if(nums[i]==1){
            count++;
            maxCount = max(maxCount,count);
        }
        else {
            count =0;
        }

    }
    cout << "Max consecutive 1s: " << maxCount << endl;
}

void longestSubArraySum(vector<int>&nums,int target){
    int n = nums.size();
    
    vector<int>prefixSum(n+1,0);
    for(int i =1; i<=n; i++){

        prefixSum[i] = prefixSum[i-1] + nums[i-1];
        if(prefixSum[i] == target){
            cout << "Subarray found from index 0 to " << i-1 << endl;
            return;
        }
        for(int j =0; j<i-1; j++){
            if(prefixSum[i] - prefixSum[j] == target){
                cout << "Subarray found from index " << j << " to " << i-1 << endl;
                return;
            }
        }
    
}
}

int main(){
    vector<int> arr = {1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
vector<int> nums = {1,1,0,1,1,1,0,0,1,1};

   maxConse(nums);
    return 0;
}