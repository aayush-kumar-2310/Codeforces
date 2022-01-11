#include<bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<int, int> mp;
    for(int i=0; i<4; i++){
        int x; cin>>x;
        mp[x]++;
    }
    cout<<4-mp.size();
}