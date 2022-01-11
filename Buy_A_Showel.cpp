#include<bits/stdc++.h>
using namespace std;

int main(){

    int k, r; cin>>k>>r;
    int ans=1, i=k;

    while(1){
        if(k%10 == 0 or k%10-r==0)
            break;
        ans++;
        k+=i;
    }

    cout<<ans;
}