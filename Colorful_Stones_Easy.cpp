#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1, s2;
    cin>>s1>>s2;
    int p1=0, p2=0, ans=0;

    while(p1<s1.size() and p2<s2.size()){
        if(s1[p1] == s2[p2])
            p1++, p2++, ans++;
        else
            p2++;
    }
    cout<<ans+1;
}