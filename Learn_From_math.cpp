#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n){

    for(int i=2; i*i <= n; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}

int main(){

    long long n; cin>>n;
    for(long long i=4; i<=n/2; i++){
        if(!isPrime(i) and !isPrime(n-i)){
            cout <<i<<" "<<n-i;
            return 0;
        }
    }   
}