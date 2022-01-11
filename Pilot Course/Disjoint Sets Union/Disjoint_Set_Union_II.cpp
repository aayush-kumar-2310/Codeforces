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

int find_set(int a, vector<int> &parent, vector<int> &rank){
    if(parent[a] == -1)
        return a;
    else
        return parent[a] = find_set(parent[a], parent, rank);
}

void union_set(int a, int b, vector<int> &parent, vector<int> &rank, vector<int> &size, vector<pair<int, int>> &num){
    int x = find_set(a, parent, rank);
    int y = find_set(b, parent, rank);
    
    if(x!=y){
        if(rank[x] > rank[y]){
            parent[y] = x;
            size[x] += size[y];
            num[x].first=min(num[y].first, num[x].first);
            num[x].second=max(num[y].second, num[x].second);
        }
            
        else if(rank[y] > rank[x]){
            parent[x] = y;
            size[y] += size[x];
            num[y].first=min(num[y].first, num[x].first);
            num[y].second=max(num[y].second, num[x].second);
        }
            
        else{
            parent[y] = x;
            size[x] += size[y];
            num[x].first=min(num[y].first, num[x].first);
            num[x].second=max(num[y].second, num[x].second);
        }
    }
}

bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
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
    
        int n,q; cin>>n>>q;
        vector<int> parent(n+1,-1), rank(n+1,0), size(n+1,1);
        vector<pair<int, int>> num(n+1);
        
        for(int i=1; i<=n; i++)
            num[i]={i,i};

        for(int i=0; i<q; i++){
            string s; cin>>s;
            if(s=="union"){
                int a, b; cin>>a>>b;
                union_set(a, b, parent, rank, size, num);
            }
            else{
                int a; cin>>a;
                int x = find_set(a, parent, rank);
                cout<<num[x].first<<" "<<num[x].second<<" "<<size[x]<<endl;
            }
        }
    }
    return 0;
}
