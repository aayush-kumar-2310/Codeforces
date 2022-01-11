#include<bits/stdc++.h>
using namespace std;

int fact[3001]={};
bool mark[3001]={};

void factors(){

    memset(fact, 1, sizeof(fact));

    for(int i=2; i*i<=3001; i++){
        for(int j=i*i; j<=3001; j++){
            mark[j] = 1;
            fact[j] = i;    
        }
    }
}

int main(){

    int a; cin>>a;
    unordered_set<int> st;

    for(int i=1; i<=a; i++){
        int tmp = i;
        while(tmp!=1){
        tmp=tmp/fact[tmp];
        st.insert(fact[tmp]);
        }
    }
    
    cout<<st.size()<<endl;
}