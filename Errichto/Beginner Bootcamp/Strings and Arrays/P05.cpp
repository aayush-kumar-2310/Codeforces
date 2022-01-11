#include<bits/stdc++.h>
using namespace std;
int main(){

    string s; cin>>s;
    int cnt=1;
    char c = s[0];

    for(int i=0; i+6<s.size(); i++){
        if(s[i] == s[i+1] and s[i]== s[i+2] and s[i]== s[i+3] and s[i]== s[i+4] and s[i]== s[i+5] and s[i]== s[i+6]){
            cout<<"YES";
            return 0;
        }

    }
    cout<<"NO";
}