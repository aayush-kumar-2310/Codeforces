#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b; cin>>a>>b;
    int ans=0;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            if((i+j)%5 == 0) ans++;
        }
    }

    cout<<ans;
}