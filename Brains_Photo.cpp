#include<bits/stdc++.h>
using namespace std;

int main(){

    double a,b; cin>>a>>b;
    char c;
    bool flg = 1;

    for(int i=0; i<a*b; i++){
        cin>>c;
        if(c=='C' or c=='M' or c=='Y'){
            flg = 0;
            break;
        }
    }
    if(flg ==1)
        cout<<"#Black&White";
    else
        cout<<"#Color";
}