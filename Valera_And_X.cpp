#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    vector<int> v1(n+1,0), v2(n+1, 0);
    map<char, int>mp;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            char c; cin>>c;
            mp[c]++;
            v1[i+j] = c;
            v1[n-1+i-j] = c;
        }
    }

    if(v1==v2 and mp.size() == 3)
        cout<<"YES";
    else
        cout<<"NO";
}