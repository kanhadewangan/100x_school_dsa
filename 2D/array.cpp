#include<bits/stdc++.h>
using namespace std;

void maxElement(vector<vector<int>> arr, int row,int col){
    int max = arr[0][0];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    cout<<max;

}

void search2D( int row,int col,int target,vector<vector<int>> arr){
    bool found=false;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if(arr[i][j]==target){
                found=true;
                break;
            }
        }
        if(found) break;
    }
    if(found){
        cout<<"true";
    }
    else {
        cout<<"false";
    }   
}
void rowMin(vector<vector<int>> arr, int row,int col){
    for (int i = 0; i < row; i++) {
        int min=arr[i][0];
        for (int j = 0; j < col; j++) {
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
        cout<<min<<" ";
    }
}
void ColAdd(vector<vector<int>> arr, int row,int col){
    int sum =0;
    vector<int> colSum(col,0);

    for (int i = 0; i < col ; i++) {
        for (int j = 0; j < row; j++) {
            colSum[i]+=arr[j][i];          
        }
        
    }
    for(int i=0;i<col;i++){
        cout<<colSum[i]<<" ";
    }}


 void max1Row(vector<vector<int>>arr, int row, int col){
    int cnt =0;
    for (int i = 0; i < row; i++) {
        int max=arr[i][0];
        for (int j = 0; j < col; j++) {
            if(arr[i][j]==1){
                cnt++;
            }
             else if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
        cout<<max<<" ";
    }
 }    



int main(){
    int row,col;
    cin>>row>>col;
    vector<vector<int>> arr(row,vector<int>(col));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin>>arr[i][j];
        }
    }

    ColAdd(arr,row,col);

}