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

int32_t main(){
    fast


    // I'll be there 1 day
    // 1 DAY :)


    int t=1;
    //cin>>t;
    while(t--){
        
        int n; cin>>n;
        vector<int> arr, rarr, parr(n),prarr(n);
        for(int i=0; i<n; i++){
            int x; cin>>x;
            arr.pb(x);
        }

        rarr = arr;
        sort(all(rarr));
        
        parr[0] = arr[0];
        prarr[0] = rarr[0];
        for(int i=1; i<n; i++){
            prarr[i] = prarr[i-1] + rarr[i];
            parr[i] = parr[i-1] + arr[i];
        }

        // for(auto x: parr)
        //     cout<<x<<" ";
        // cout<<endl;

        // for(auto it: prarr)
        //     cout<<it<<" ";

        int q; cin>>q;
        for(int i=0; i<q; i++){
            int x, y, z; cin>>x>>y>>z;

            if(x==1){
                if(y==1)
                    cout<<parr[z-1]<<endl;
                else
                    cout<<parr[z-1] - parr[y-2]<<endl;
            }

            else{
                if(y==1)
                    cout<<prarr[z-1]<<endl;
                else
                    cout<<prarr[z-1] - prarr[y-2]<<endl;
            }
        }
    }
    return 0;
}
