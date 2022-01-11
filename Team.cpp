#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=0; cin>>n;

    for(int i=0; i<n; i++){
        int a,b,c; cin>>a>>b>>c;
        if((a==b and a==1) or (a==c and a==1) or (b==c and c==1))
            ans++;
    }
    cout<<ans;
}