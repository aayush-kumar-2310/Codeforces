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

int n,m; 
int arr[1001][3];

bool isGood(int t, vector<int> &sum){
    
    int tmp=0;

    for(int i=0; i<m; i++){
        sum[i] = (t - arr[i][1]*(t/(arr[i][0]*arr[i][2]+arr[i][1]))) / arr[i][0];
        tmp += sum[i];
    }

    if(tmp>=n) return true;
    else
        return false;
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
    
        cin>>n>>m;
        vector<int> sum(m, 0);
        for(int i=0; i<m; i++)
            for(int j=0; j<3; j++)
                cin>>arr[i][j]; 

        int l=0, r=1e8;

        // for(int i=0; i<m; i++){
        //     for(int j=0; j<3; j++)
        //         cout<<arr[i][j]<<" ";
        //     cout<<endl;
        // }

        while(l+1<r){

            int mid = l + (r-l)/2;
            
            if(isGood(mid, sum))
                r=mid-1;
            else
                l=mid+1;
        }
        cout<<l<<endl;
        for(auto it:sum)
            cout<<it<<" ";
    }
    return 0;
}
