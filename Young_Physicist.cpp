#include<bits/stdc++.h>
using namespace std;
int main(){

    long long n, a=0, b=0, c=0; cin>>n;
    for(int i=0; i<n; i++){
        int x,y,z; cin>>x>>y>>z;
        a+=x, b+=y, c+=z;
    }

    if(a==0 and b==0 and c==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}