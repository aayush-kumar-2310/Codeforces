#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    int n, k; cin>>n>>k;
    int arr[n];
    ll ans = 0;
    for(int i=0; i<n; i++)
        cin>>arr[i];

    sort(arr, arr+n);

    for(int i=0; i<k; i++)
        ans += arr[i];
    cout<<ans;
}