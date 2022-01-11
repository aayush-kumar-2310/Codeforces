#include<bits/stdc++.h>
using namespace std;

int main(){

    string s, tmp="";
    int lC = 0;
    cin>>s;

    stack<char> st;

    for(int i = s.size(); i>=0; i--){
        if(s[i] == 'h' or s[i] == 'e' or s[i] == 'l' or s[i] == 'o')
            st.push(s[i]);
    }

    if(!st.empty())
        tmp += st.top();

    while( !st.empty()){
        
        if(st.top() != 'l')
            lC++;

        else if(tmp[tmp.size()-1] == st.top() and lC<=2)
            st.pop();
        else
            tmp += st.top();
    }

    if(s == "helo")
        cout<<"YES";
    else
        cout<<"NO";


}