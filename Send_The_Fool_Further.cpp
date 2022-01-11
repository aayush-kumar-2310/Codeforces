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

void calcDistance(vector<pair<int, int>> adjList[], vector<int>&dist){

    dist[0]=0;
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0,0});

    while(!pq.empty()){
        int currWt = pq.top().first;
        int currNode = pq.top().second;
        pq.pop();

        for(auto it: adjList[currNode]){
            if(dist[it.first] > dist[currNode] + it.second){
                dist[it.first] = dist[currNode] + it.second;
                pq.push({it.second, it.first});
            }
        }
    }
}

int32_t main(){
    fast


    // I'll be there 1 day
    // 1 DAY :)


    int t=1;
    //cin>>t;
    while(t--){
    
        int nodes; cin>>nodes;
        vector<pair<int, int>> adjList[nodes];
        vector<int> dist(nodes, INT_MAX);
        for(int i=0; i<nodes; i++){
            int a,b,wt; cin>>a>>b>>wt;
            adjList[a].pb({b, wt});
            adjList[b].pb({a,wt});
        }

        calcDistance(adjList, dist);
        sort(all(dist));

        cout<<dist[nodes-1]<<endl;
    }
    return 0;
}
