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

void testing(char str){
  if(str>='0' && str<='9'){
    cout<<"Digit";
  }
  else if(str>='a' && str<='z'){
    cout<<"Lowercase";
  }
  else if(str>='A' && str<='Z'){
    cout<<"Uppercase";
  }
  else {
    cout<<"Special Character";
  }

}

void passwordTest(string input){
    bool hasUpper=false, hasLower=false, hasDigit=false, hasSpecial=false;
    for(int i = 0; i < input.length(); i++){
        if(input[i]>='0' && input[i]<='9'){
            hasDigit=true;
        }
        else if(input[i]>='a' && input[i]<='z'){
            hasLower=true;
        }
        else if(input[i]>='A' && input[i]<='Z'){
            hasUpper=true;
        }
        else {
            hasSpecial=true;
        }
    }
    if(hasUpper && hasLower && hasDigit && hasSpecial){
        cout<<"Strong";
    }
    else {
        cout<<"Weak";
    }
}


void isPalindrome(string input){
    string res;
    for(int i = input.length()-1; i>=0; i--){
        res+=input[i];
    }
    if(res==input){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}

void wordCount(string input){
    int count=0;
    for(int i = 0; i < input.length(); i++){
        if(input[i]==' '){
            count++;
        }
    }
    cout<<count+1;
}

void replaceChar(string input, char oldChar, char newChar){
    for(int i = 0; i < input.length(); i++){
        if(input[i]==oldChar){
            input[i]=newChar;
        }
    }
    cout<<input;
}


int main() {
 string input;
 getline(cin, input);
 passwordTest(input);
}




