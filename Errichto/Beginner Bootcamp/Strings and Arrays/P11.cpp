#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,q; cin>>n>>q;
    int l[n+1]={}, r[n+1]={}, uD[2*n+1]={}, lD[2*n+1]={};

    for(int i=0; i<q; i++){
        int a,b; cin>>a>>b;
        if(r[a] == 0 and l[b] == 0 and uD[a+b] == 0 and lD[n-1+b-a] == 0){
            cout<<"YES\n";
            r[a]=1, l[b]=1, uD[a+b]=1, lD[n-1+b-a]=1;
        }
        else
            cout<<"NO\n";
    }
}