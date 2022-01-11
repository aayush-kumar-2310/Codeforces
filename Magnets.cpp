#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, ans=0; cin>>n;
    string tmp,s;
    cin>>s;
    tmp=s;

    for(int i=1; i<n; i++){

        cin>>s;
        if(tmp != s)
            ans++, tmp=s;
    }
    cout<<ans+1;
}