#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, ans=0; cin>>n;
    
    map<int, int> mp;
    
    for(int i=0; i<n; i++){
        int x; cin>>x;
        mp[x]++;
    }
    
    int t = min(mp[3], mp[1]);
    ans += mp[4];
    ans += mp[2]/2;
    ans += t;
    mp[3] -= t;
    mp[1] -= t;
    
    if(mp[3]>0)
        ans+=mp[3];
    
    if(mp[1]>0 or mp[2]%2==1){
        
        ans = ans+mp[1]/4;
        if(mp[1]%4 <=2 and mp[1]%4!=0)
            ans++;
        else if(mp[1]%4>2)
            ans+=2;
    }
    cout<<ans;
}