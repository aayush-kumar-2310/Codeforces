#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;

    for(int i=2; i<=n; i++){

        if(n%i == 0){
            
            bool flg = true;
            int num = i;
            while(num){
                
                if(num%10 != 4 and num%10 != 7){
                    flg = false;
                    break;
                }
                else
                    num /=10;
            }
            
            if(flg == true){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
}