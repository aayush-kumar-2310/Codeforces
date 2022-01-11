#include<bits/stdc++.h>
using namespace std;
int main(){

    int n, m; cin>>n>>m;
    long long ans = 0, cnt = 0;
    int arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    sort(arr, arr+n);

    for(int i=0; i<n; i++)
        if(arr[i] <0 and cnt < m)
            ans += -(arr[i]), cnt++;
    
    cout<<ans;
}