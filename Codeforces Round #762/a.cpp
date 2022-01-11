#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){

        string s; cin>>s;
        bool flg = 1;
        
        if(s.size()%2 != 0){
            cout<<"NO\n";
        }

        else{

            for(int i=0; i<s.size()/2; i++){
                if(s[i] != s[s.size()/2+i]){
                    flg = 0;
                    cout<<"NO\n";
                    break;
                }
            }
            if(flg == 1)
                cout<<"YES\n";
        }

    }

    
}