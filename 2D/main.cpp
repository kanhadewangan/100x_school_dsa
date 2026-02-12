#include<bits/stdc++.h>
using namespace std;



void printRow(vector<vector<int>>& matrix, int row,int col) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < col; j++) {
            cout << matrix[i][j]<< " ";
        }
    }
    cout << endl;
}

void PrintCol(vector<vector<long>>& matrix, int row,int col) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < col; j++) {
            cout << matrix[j][i]<<" ";
        }
    }
    cout << endl;
}

// void testing(){
//     if(typeid(str) == typeid(int)){
//     cout<<"Digit";
//   }
//   else if(typeid(str) == typeid(char)){ 
//     int asciiValue= static_cast<int>(str);
//     if(asciiValue>=65){
//         cout<<"Uppercase";
//     }
//     else {
//         cout<<"Lowercase";
//     }
//   } 
//   else {
//     cout<<"Special Character";
//   }

// }
int main() {
 char ch;
cin >> ch;
char res;
if (ch >= 'A' && ch <= 'Z') {
    res = ch + 32;
    cout << res;
} 
else {
    cout<< ch;
}
 
}