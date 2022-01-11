#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    int minIn = 0, maxIn = 0;
    vector<int> arr;

    for(int i = 0; i<n; i++){
        int x;   
        cin>>x;
        arr.push_back(x);
        if(x <= arr[minIn])
            minIn = i;
        if(x > arr[maxIn])
            maxIn = i;
    }

    //cout<<minIn<<" "<<maxIn;
    if(maxIn < minIn)
        cout<< maxIn + (n-1) - minIn;

    else
        cout<<maxIn-0 + (n-1) - minIn- 1;

}