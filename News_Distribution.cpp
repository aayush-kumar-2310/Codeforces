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

void calculate(int node, vector<int> adjList[], vector<int> &vis, vector<int> &ans, vector<int> &comp){

    queue<int> q;
    q.push(node);
    vis[node]=1;

    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        comp.pb(tmp);
        for(auto it:adjList[tmp]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    }
    for(auto it: comp)
        ans[it] = comp.size();
}

int32_t main(){
    fast


    // I'll be there 1 day
    // 1 DAY :)


    int t=1;
    //cin>>t;
    while(t--){
    
        int nodes, cc; cin>>nodes>>cc;
        vector<int>adjList[nodes+1], vis(nodes+1, 0), ans(nodes+1);

        for(int i=0; i<cc; i++){
            int z; cin>>z;
            int arr[z];
            for(int j=0; j<z; j++)
                cin>>arr[j];
            for(int j=0; j<z-1; j++){
                adjList[arr[j]].pb(arr[j+1]);
                adjList[arr[j+1]].pb(arr[j]);
            }
        }

        for(int i=1; i<=nodes; i++){
            vector<int> comps;
            if(!vis[i])
                calculate(i, adjList, vis, ans, comps);
        }

        for(int i=1; i<ans.size(); i++)
            cout<<ans[i]<<" ";

        return 0;
    }
}
