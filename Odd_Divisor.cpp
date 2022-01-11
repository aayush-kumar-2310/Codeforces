#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){

        uint64_t n; cin>>n;

        if(n&(n-1))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

}