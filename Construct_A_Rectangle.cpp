#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){

        int l1, l2, l3; cin>>l1>>l2>>l3;

        if(max(l1, max(l2, l3)) == l1 + l2 + l3 - max(l1, max(l2, l3)) )
            cout<<"YES\n";

        else if(l1 == l2 and l3%2 == 0)
            cout<<"YES\n";
        else if(l3 == l2 and l1%2 == 0)
            cout<<"YES\n";
        else if(l1 == l3 and l2%2 == 0)
            cout<<"YES\n";

        else
            cout<<"NO\n";

        
    }
}