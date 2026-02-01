#include <bits/stdc++.h>
using namespace std;


string leapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return "Yes";
    } else {
        return "No";
    }
}

 int secondlastdigit(int n) {
    n = n / 10;
    return n % 10;
}



void fizzBuzz(int n) {
    for (int i = 1; i <= n; i++) {
        string s = "";

        if (i % 3 == 0) s += "Fizz";
        if (i % 5 == 0) s += "Buzz";

        cout << (s.empty() ? to_string(i) : s) << endl;
    }
}

void zeroCoun(int n){
    int count=0;
    for(int i =0; i<n; i++){
        if (n%10==0){
            count++;
            n=n/10;
        }
        else{
            break;
        }
    }
cout<<count;
}

int main() {
   int n ;
   cin>>n;
    zeroCoun(n);

}
