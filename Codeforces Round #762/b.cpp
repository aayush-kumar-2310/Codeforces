#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){

        long long n; cin>>n;
        unordered_set<int> st;

        for(long long i=1; i*i<=n; i++){
            st.insert(i*i);
        }
        for(long long i=1; i*i*i<=n; i++){
            st.insert(i*i*i);
        }

        cout<<st.size()<<endl;
    }

}