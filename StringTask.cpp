#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    for(int i = 0; i<s.length(); i++){
        if(tolower(s[i])  != 'a' and tolower(s[i])  != 'e' and tolower(s[i])  != 'i' and tolower(s[i])  != 'o' and tolower(s[i])  != 'u' and tolower(s[i])  != 'y')
            cout<<'.'<<(char)tolower(s[i]);
    }
}