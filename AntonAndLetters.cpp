#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin, s);
    map<char, int> mp;

    for(int i= 0; i<s.size(); i++){
        if(s[i] != '{' and s[i] != '}' and s[i] != ',' and s[i] != ' ')
            mp[s[i]]++;
    }

    cout<<mp.size();

}