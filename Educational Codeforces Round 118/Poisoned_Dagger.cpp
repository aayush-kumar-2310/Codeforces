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

bool isPossible(int k, int h, int n, vector<int> &arr){

    int sum=0;
    for(int i=1; i<n; i++){
        sum += min(arr[i]-arr[i-1], k);
        
        if(sum>=h)
            return true;
    }

    sum+=k;
    return sum>=h;
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
    
        int n,h; cin>>n>>h;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        int l=1, r=1e18;

        while(l<=r){
            int m = (l+r)/2;

            if(isPossible(m, h, n, arr))
                r=m-1;
            else
                l=m+1;
        }
        cout<<l<<endl;
    }
    return 0;
}
