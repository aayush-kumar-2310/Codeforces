#include<bits/stdc++.h>
using namespace std;
int main(){

    int a, b, ans=0; cin>>a>>b;
    for(int i=0; i<a; i++){
        int x; cin>>x;
        if(x>b)
            ans+=2;
        else
            ans++;
    }
    cout<<ans;
}