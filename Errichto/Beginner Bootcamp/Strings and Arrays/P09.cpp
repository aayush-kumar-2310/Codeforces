#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    string s; cin>>s;

    int c8=0;

    for(int i=0; i<n; i++)
        if(s[i] == '8')
            c8++;
    
    cout<<min(n/11, c8);
}