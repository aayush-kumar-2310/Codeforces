#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, k; cin>>n>>k;
    double arr[n][2];
    double dist=0;

    for(int i=0; i<n; i++){
        double a, b; cin>>a>>b;
        arr[i][0]=a;
        arr[i][1]=b;
    }
    

    for(int i=1; i<n; i++)
        dist += sqrt((arr[i][0]-arr[i-1][0])*(arr[i][0]-arr[i-1][0]) + (arr[i][1]-arr[i-1][1])*(arr[i][1]-arr[i-1][1]));

    cout<<setprecision(100)<<(double)dist*k/50.0;
        

}