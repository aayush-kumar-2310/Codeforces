#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, t; cin>>n>>t;
    int k = 240-t, a[n];
    a[0] = 5;
    
    int ans = 0;
    
    for(int i=1; i<n; i++)
        a[i] = (i+1)*5 + a[i-1];

    for(int i=0; i<n; i++){
        if(k-a[i] >= 0)
            ans++;
        else
            break;
    }
    cout<<ans;
}