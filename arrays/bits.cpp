#include<bits/stdc++.h>
using namespace std;


void ResultDay(int size,vector<int>&arr,int n){
    int passed = 0;
    int failed = 0;
    for(int i =0; i<size;i++){
        if(arr[i]>=n){
            passed++;
        }
        
    }
    cout<<"Pass: "<<passed<<endl;
    cout<<"Fail: "<<size - passed;
}

void fastRunner(int size, vector<int>&arr){
    int pace= arr[0];
    int idx = 0;
    for(int i =0; i<size; i++){
       pace = min(pace, arr[i]);
       if(arr[i]==pace){
              idx = i;
       }
    }
    cout << "Fastest Runner: " << pace << endl;
    cout << "Fastest Runner Index: " << idx+1 << endl;
}
void sortDecs(int size, vector<int>&arr){
       sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    for(int num : arr){
        cout << num << " ";
    }
}

 int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
 }

   void isSame(int n,int m){
    if(fact(n) == fact(m)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
   }

int main(){
    
    int n,m;
    cin >> n >> m;
    isSame(n,m);

    
   
}