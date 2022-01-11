#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}

bool vis[1000][1000]={};

bool check(string s){

    if(s.size() == 1)
        return true;

    int currX=500, currY=500;
    vis[500][500]=1;
    
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'L' and !vis[currX][currY-1]){    
            //cout<<1<<" ";
            currY--, vis[currX][currY]=1;
            if(vis[currX][currY-1] or vis[currX+1][currY] or vis[currX-1][currY])
                return false;
        } 

        else if(s[i] == 'R' and !vis[currX][currY+1]){
            //cout<<2<<" ";
            currY++, vis[currX][currY]=1;
            if(vis[currX][currY+1] or vis[currX+1][currY] or vis[currX-1][currY])
                return false;
        }
            
        else if(s[i] == 'D' and !vis[currX+1][currY]){
            //cout<<3<<" ";
            currX++, vis[currX][currY]=1;
            if(vis[currX][currY-1] or vis[currX+1][currY] or vis[currX][currY+1])
                return false;
        } 
            
        else if(s[i] == 'U' and !vis[currX-1][currY]){
            //cout<<4<<" ";
            currX--, vis[currX][currY]=1;
            if(vis[currX][currY-1] or vis[currX-1][currY] or vis[currX][currY+1])
                return false;
        }
        else
            return false;
    }
    
    return true;
}

int32_t main(){
    fast


    // I'll be there 1 day
    // 1 DAY :)


    int t=1;
    //cin>>t;
    while(t--){
    
        string s; cin>>s;

        if(check(s))
            cout<<"OK";
        else
            cout<<"BUG";
    }
    return 0;
}
