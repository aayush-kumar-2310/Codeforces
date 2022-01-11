#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> frq(n, 0);
    int a,b;
    cin>>a;
    for(int i= 0; i<a; i++){
        int x;
        cin>>x;
        frq[x-1]++;
    }

    cin>>b;
    for(int i= 0; i<b; i++){
        int x;
        cin>>x;
        frq[x-1]++;
    }

    sort(frq.begin(), frq.end());
    if(frq[0] != 0)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
}