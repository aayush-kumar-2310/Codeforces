#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){

        long long x, y, a, b; cin>>x>>y>>a>>b;

        cout<< min((x+y)*a , (abs(x-y)*a + b*min(x, y)))<<endl;

    }
}