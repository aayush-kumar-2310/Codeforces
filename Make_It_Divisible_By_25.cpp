#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){

        string s; cin>>s;
        bool zer=false, five=false;
        int c1, c2;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i] == '0' and zer!= true) zer=true, c1=i;
            else if(s[i] == '5' and five!=true) five = true, c1=i;

            if(s[i]=='0' and zer==true){ c2=i; break;}
            else if(s[i]=='5' and zer==true) { c2=i; break;}
            else if(s[i]=='2' and five == true) { c2=i; break;}
            else if(s[i]=='7' and five == true) { c2=i; break;}
        }
        cout<<s[c2]<<" "<<s[c1]<<endl;
    }

}