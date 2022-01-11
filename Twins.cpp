#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    int arr[n];
    int sum=0;
    int tmp=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    sort(arr, arr+n, greater<>());

    int ans = 0;
    for(int i=0; i<n; i++){
        if(tmp<=sum)
            tmp+=arr[i], sum-=arr[i], ans++;
        else
            break;
    }

    cout<<ans;
}