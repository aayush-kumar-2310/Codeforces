#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    vector<int> color[n];

    for(int i=0; i<n; i++){
        int a,b; cin>>a>>b;
        color[i].push_back(a);
        color[i].push_back(b);
    }

    int ans=0;
    
    for(int i=0; i<n; i++){
        int c = color[i][0];
        for(int j=0; j<n; j++)
            if(color[j][1] == c and j!=i) ans++;
    }

    cout<<ans;
}