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


int ans=0;
void bfs(int node, vector<int> adjList[], vector<int> &vis, vector<int> &cost){
    int mini = INT_MAX;
    vis[node]=1;
    queue<int> q;
    q.push(node);
    
    while(!q.empty()){

        int curr = q.front();
        q.pop();
        mini = min(mini, cost[curr-1]);

        for(auto it: adjList[curr]){
            if(!vis[it]){
                q.push(it);
                vis[it]=1;
            }
        }
    }
    ans+=mini;
}

int32_t main(){
    fast


    // I'll be there 1 day
    // 1 DAY :)


    int t=1;
    //cin>>t;
    while(t--){
    
        int nodes, edges; cin>>nodes>>edges;
        vector<int> cost(nodes+1), adjList[nodes+1], vis(nodes+1,0);
        for(int i=0; i<nodes; i++)
            cin>>cost[i];

        for(int i=0; i<edges; i++){
            int a,b; cin>>a>>b;
            adjList[a].pb(b);
            adjList[b].pb(a);
        }

        for(int i=1; i<=nodes; i++){
            if(!vis[i])
                bfs(i, adjList, vis, cost);
        }

        cout<<ans;
    }
    return 0;
}
