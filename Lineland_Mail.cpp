#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<abs(arr[0]-arr[1])<<" "<<abs(arr[0] - arr[n-1])<<endl;
    
    for(int i=0)
}