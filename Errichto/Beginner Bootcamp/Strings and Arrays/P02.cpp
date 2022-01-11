#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    int arr[n], preArr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    int a, b; cin>>a>>b;
    preArr[0] = arr[0];
    for(int i=1; i<n; i++){
        preArr[i] = arr[i] + preArr[i-1];
    }
        

    if(a==0)
        cout<<preArr[b];
    else
        cout<<preArr[b] - preArr[a-1];

}