#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    int ans = 0;
    int s = INT_MAX;

    for(int i=0; i<n; i++){
        int x; cin>>x;
        ans += x;
        if(x < s and x%2 == 1)
            s = x;
    }
    if(ans%2 == 1)
        cout<<ans;  
    else
        cout<<ans -s;
}