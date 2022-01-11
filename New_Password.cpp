#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b; cin>>a>>b;
    string s;

    for(int i=97; i<97+b; i++){
        s+=char(i);
    }

    int tmp = a/b;
    while(tmp--){
        cout<<s;
    }
    tmp = a%b;
    for(int i=0; i<tmp;i++){
        cout<<s[i];
    }
}