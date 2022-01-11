#include<bits/stdc++.h>
using namespace std;

int main(){

    string s, tmp; cin>>s;
    bool flg = flg;

    for(int i =0; i<s.size(); i++){
        if(s[i] == 'W' and s[i+1] == 'U' and s[i+2] == 'B'){
            if(i == 0)
                i = 2;
            
            else if(tmp.back() == ' '){
                i = i+2;
            }   
            else{
                tmp += " ";
                i = i+2;
            }
        }
        else
            tmp += s[i];
    }

    cout<<tmp;
}