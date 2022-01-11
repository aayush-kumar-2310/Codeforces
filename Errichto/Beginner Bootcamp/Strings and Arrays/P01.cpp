#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n; cin>>n;
    long long arr[n];

    for(long long i=0; i<n; i++)
        cin>>arr[i];

    for(long long i=0; i<n/2;i++){
        arr[i] = arr[i]^arr[n-1-i];
        arr[n-1-i] = arr[i]^arr[n-1-i];
        arr[i] = arr[i]^arr[n-1-i];
    }

    for(long long i=0; i<n;  i++)
        cout<<arr[i]<<" ";
}