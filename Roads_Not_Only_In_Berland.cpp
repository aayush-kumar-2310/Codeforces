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
void union_set(int a, int b, vector<int> &parent, vector<int> &rank){
    int x = find_set(a, parent, rank);
    int y = find_set(b, parent, rank);
    if(x!=y){
        if(rank[x] > rank[y])
            parent[y] = x;
        else if(rank[y] > rank[x])
            parent[x] = y;
        else  
            parent[y]=x, rank[x]++;  
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
    
        int n; cin>>n;
        vector<int> parent(n+1, -1), rank(n+1, 0);
        int ans1=0, ans2=0;
        vector<int> num1, num2;
        for(int i=0; i<n-1; i++){

            int a, b; cin>>a>>b;
            
            if(find_set(a, parent, rank) == find_set(b, parent, rank)){
                ans1++;
                num1.pb(a);
                num1.pb(b);
            }
            else
                union_set(a, b, parent, rank);
        }

        //sort(all(parent));

        for(int i=1; i<=n; i++)
            if(parent[i] == -1)
                ans2++, num2.pb(i);

        cout<<min(ans1, ans2)+(max(ans1, ans2) - min(ans1, ans2))-1<<endl;

        int cnt=0;
        int cnt2=0;
        while(cnt<ans1*2){
            cout<<num1[cnt]<<" "<<num1[cnt+1]<<" "<<num2[cnt2]<<" "<<num2[cnt2+1]<<endl;
            cnt2++;
            cnt+=2;
        }
    }
    return 0;
}
