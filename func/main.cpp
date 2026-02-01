#include<bits/stdc++.h>
using namespace std;



void factors(int n){
    for(int i=n;i>=1;i--){
        if(n%i==0){
            cout<<i<<" ";
        }
    }   
}

void prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"Not Prime"<<endl;
            return;
        }
    }
    cout<<"Prime"<<endl;
}
long long factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

long long ncr(int n , int r){
    if(r > n) return 0;
    long long num = factorial(n);
    long long den = factorial(r)*factorial(n-r);
    return num/den;
}
void primeNumbers(int n){
    for(int i =2; i<=n; i++){
        bool isPrime = true;
        for(int j=2; j<=sqrt(i); j++){
            if(i%j==0){   
                isPrime = false;             
                break;
            }
        }
        if(isPrime){
            cout<<i<<" ";
        }
    }
}
int hcf(int a, int b){
    if(b==0){
        return a;
    }
    return hcf(b, a%b);
}


int main(){
    int n;
    cin>>n;
    prime(n);
    primeNumbers(n);
   
    return 0;
}