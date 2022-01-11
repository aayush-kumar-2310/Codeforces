#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b; cin>>a>>b;
    int cnt = 0;
    
    while(a>0 and b>0){
        cnt++;
        a--;
        b--;
    }

    if(cnt%2 == 0)
        cout<<"Malvika";
    else
        cout<<"Akshat";

}