#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b; cin>>a>>b;
    int x=max(a,b);

    if(x==1)
        cout<<"1/1";
    else if(x==2)
        cout<<"5/6";
    else if(x==3)
        cout<<"2/3";
    else if(x==4)
        cout<<"1/2";
    else if(x==5)
        cout<<"1/3";
    else
        cout<<"1/6";
    
}