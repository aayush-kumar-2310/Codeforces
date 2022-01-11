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
    cin>>t;
    while(t--){
        int n, k; cin >> n >> k;
        string s;
        cin >> s;
        long cnt = 0;
        long cnt2 = 0;
        vector<int> alpha(26); 
        for(int i=0; i<26; i++) {
            int cur = (s[i] - 'a');
            alpha[cur]++;
        }
        for(int i=0; i<26; i++){
            cnt += alpha[i] / 2;
            cnt2 += alpha[i] % 2;
        }
        if (k <= (cnt2 + (cnt % k) * 2)){
            cout << ((cnt / k) * 2) + 1 << endl;
        }
        else{
            cout << (cnt / k) * 2 << endl;
        }
    }
    return 0;
}
