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


bool isGood(int t, int h, vector<int>&arr){

    if(t==0) return false;
    if(t%2!=0){
        if(arr[0]*(t/2 +1) + arr[1]*(t/2) >=h)
            return true;
        else
            return false;
    }

    else{
        if(arr[0]*(t/2) + arr[1]*(t/2) >=h)
            return true;
        else
            return false;
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
    
        int n, h; cin>>n>>h;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(all(arr));
        reverse(all(arr));

        int x=arr[0], y=arr[1];
        int s=x+y;
        
        if(x>=h)
            cout<<1<<endl;
        else
            cout << min((h+s-1)/s*2, (h-arr[0]+s-1)/s*2+1) << "\n";

    }
    return 0;
}
