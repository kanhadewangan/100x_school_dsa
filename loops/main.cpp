#include<iostream>
using namespace std;

char reverse(int n){
    bool isTrue = false;
    int rev = 0;

    while (n) {
        
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
        if(n==rev){
            isTrue = true;
            break;
        }
    }
    if(isTrue){
        return "YES";
    }
    else{
        return "NO";
    
}
}
int main() {
    int n;
    cin >> n;

    cout << reverse(n) << endl;
}
