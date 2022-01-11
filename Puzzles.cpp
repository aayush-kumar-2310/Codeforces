#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;

    vector<int> arr;

    for(int i= 0; i<m; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    int p1 = 0, p2 = n-1;
    int ans = INT_MAX;

    while(p2 != m){
        ans = min(ans, arr[p2]-arr[p1]);
        p2++;
        p1++;
    }
    cout<<ans;
}