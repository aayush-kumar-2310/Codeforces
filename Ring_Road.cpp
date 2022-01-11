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
vector<int> ans;

void topoSort(int node, vector<pair<int,int>> adjList[], vector<int> &vis, vector<int> &elements){

    vis[node] = 1;

    for(auto it: adjList[node]){
        if(!vis[it.first]){
            topoSort(it.first, adjList, vis, elements);
        }
    }
    elements.pb(node);
}

void solve(int node, vector<pair<int, int>> adjList[], vector<int> &vis){

    queue<int> q;
    vis[node]=1;
    q.push(node);
    ans.pb(node);
    int last, mini=INT_MAX;

    while(!q.empty()){

        int curr = q.front();
        last=curr;
        q.pop();
        for(auto it:adjList[curr]){
            if(!vis[it.first]){
                if(mini>it.second)
                    mini=it.second;
                q.push(it.first);
                vis[it.first]=1;
            }
        }
    }
    ans.pb(last);
    ans.pb(mini);
}

int32_t main(){
    fast


    // I'll be there 1 day
    // 1 DAY :)


    int t=1;
    //cin>>t;
    while(t--){
        
        int nodes, edges, cc=0; cin>>nodes>>edges;
        
        if(nodes==edges){
            cout<<0;
            return 0;
        }
            
        vector<pair<int, int>> adjList[nodes+1];
        vector<int> vis(nodes+1, 0), elements(nodes+1);

        for(int i=0; i<edges; i++){
            int a,b,wt; cin>>a>>b>>wt;
            adjList[a].pb({b, wt});
        }

        for(int i = 1; i<=nodes; i++){
        if(!vis[i])
            topoSort(i, adjList, vis, elements);
        }

        for(auto it:elements)
            cout<<it<<" ";

        fill(all(vis), 0);

        // for(int i=0;i<elements.size();i++){
        //     if(!vis[elements[i]]){
        //         cc++;
        //         solve(elements[i], adjList, vis);
        //     }
        // }

        // cout<<cc;
        // for(int i=0; i<ans.size(); i++){
        //     if(i%3==0)
        //         cout<<endl;
        //     cout<<ans[i]<<" ";
        // }
    }
}
