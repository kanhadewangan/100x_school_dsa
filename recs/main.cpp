#include<bits/stdc++.h>
using namespace std;


int fibn(int n ){
  if(n < 0) return 0;
  if(n <= 1) return n;
  return fibn(n-1) + fibn(n-2);
}
int from1toN(int n){
  if(n<=0) return 0;
  if(n==1) return 1;
  return n + from1toN(n-1);
}

int fromNto1(int n){
  if(n<=0) return 0;
  if(n==1) return 1;
  return n - fromNto1(n-1);
}


int power(int a , int b){
  if(b==0) return 1;
  return a * power(a , b-1);

}

void printElement(vector<int>arr , int n){
  if(n<0) return;
  cout<<arr[n]<<" ";
  printElement(arr , n-1);
}

int VectorMax(const vector<int>&arr, int n ){
  if(n<0)return arr[0];
  
  int prevMax = VectorMax(arr , n-1);
  return max(arr[n] , prevMax);
}

int minValue(const vector<int>&arr , int n){
  if(n==0) return arr[0];
  int prevMin = minValue(arr , n-1);
  return min(arr[n] , prevMin);
}

int sortedArray(const vector<int>&arr,int n){
  if(n==0) return true;
  return (arr[n] >= arr[n-1]) && sortedArray(arr , n-1);
}
int firstOccurence(const vector<int>&arr,int n, int key){
  if(n >= arr.size()) return -1;
  if(arr[n]==key) return n;
  return firstOccurence(arr , n+1 , key);
}


int generateParenthesis(int n, string output, int open, int close) {
    if (open == n && close == n) {
        cout << output << endl;
        return 1;
    }

    int count = 0;

    if (open < n) {
        count += generateParenthesis(n, output + '(', open + 1, close);
    }

    if (close < open) {
        count += generateParenthesis(n, output + ')', open, close + 1);
    }

    return count;
}
string generatePowerSet(int n, string output,int index)
{
  if(index == n){
    cout<<output<<endl;
    return "";
  }
  string count = "";
  count+= generatePowerSet(n , output + char('a' + index) , index + 1);
  count+= generatePowerSet(n , output  , index + 1);
  return count;
}

int subsequnceWithK(vector<int>&arr , int k , int index, int sum){
  if(index == arr.size()){
    if(sum == k) return 1;
    else return 0;
  }
  int count = 0;
  count += subsequnceWithK(arr , k , index + 1 , sum + arr[index]);
  count += subsequnceWithK(arr , k , index + 1 , sum);
  return count;
}

int sumSubet(vector<int>&arr,int n ,int sum){
  vector<int>subset;
  if(n==0) return sum;
  int include = sumSubet(arr , n-1 , sum + arr[n-1]);
  int exclude = sumSubet(arr , n-1 , sum);
  return include + exclude;
}
int combinations(vector<int>&arr, int n, int r , int index,int target){

  if(r==0){
    return 1;
  }
  if(index >= n) return 0;
  int count = 0;
  count += combinations(arr , n , r-1 , index +1, target);
  count += combinations(arr , n , r , index +1, target);
  return count;
}


int exsistSubsequence(vector<int>&arr,int n , int target, int index){
  if(index>= n) return false;
  int sum = 0;
  sum+= arr[index];
  if(sum == target) return true;
  return exsistSubsequence(arr , n , target , index +1) || exsistSubsequence(arr , n , target , index +1);
}


int combinationTarget(vector<int>&arr, int n, int target , int index){
  if(target == 0) return 1;
  if(index >= n) return 0;
  int count = 0;
  // include
  if(arr[index] <= target&& target > 0){
    count += combinationTarget(arr , n , target - arr[index] , index);
  }
  // exclude
  count += combinationTarget(arr , n , target , index +1);
  return count;
}


int subsetSums(vector<int>&arr,int n. int index){
  if(index >= n) return 0;
  int sum = 0;
  sum += arr[index] + subsetSums(arr , n , index +1);
  sum += subsetSums(arr , n , index +1);
  return sum;
}

int main(){
 vector<int>arr = {10,1,2,7,6,1,5};
 int n = arr.size();
  count<<subsetSums(arr , n , 0); 


}

