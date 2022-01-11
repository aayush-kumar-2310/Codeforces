#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;

    while(t--){

        int n,k; cin>>n>>k;
        
        if(n == k and n!=1)
            cout<<"-1\n";
        else if( (n%2==1 and n/2 + 1 <k) or (n%2==0 and n/2 <k))
            cout<<"-1\n";
        
        else{
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(i == j and i%2 == 0 and k>0){
                        cout<<"R";
                        k--;
                    }   
                    else
                        cout<<'.';
                }
                cout<<endl;
            }
        }

    }
}