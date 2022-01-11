#include<bits/stdc++.h>
using namespace std;

int coloring(int node, vector<int> adjList[], vector<int>&vis, vector<int>&color){
    
    int ans=0;
    vis[node] = 1;
    color[node] = 1;
    queue<int> q;
    q.push(node);

    while(!q.empty()){
    
        int tmp = q.front();
        q.pop();

        for(auto it: adjList[tmp]){
            if(!vis[it]){
                vis[it] = 1;
                color[it] = 1-color[tmp];
                q.push(it);
            }
            else if(vis[it] and color[it] == color[tmp])
                return 1;
        }
    }
    return 0;
}

int main(){

    int nodes, edges, ans=0; cin>>nodes>>edges;
    vector<int> adjList[nodes+1], vis(nodes+1, 0), color(nodes+1,-1);

    for(int i=0; i<edges; i++){
        int a,b; cin>>a>>b;

        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    for(int i=1; i<=edges; i++){
        if(!vis[i])
            ans+=coloring(i, adjList, vis, color);
    }
    if((nodes-ans)%2!=0)
        cout<<ans+1;
    else
        cout<<ans;
}