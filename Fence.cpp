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
    // cin>>t;
    while(t--){
    
        int a,b; cin>>a>>b;
        int arr[a];
        for(int i=0; i<a; i++)
            cin>>arr[i];    

        int p1=0, p2=0;
        int ans=INT_MAX, tmp=0, index=0;

        while(p2<a){

            while(p2-p1 != b-1){
                tmp+=arr[p2];
                p2++;
            }

            tmp+=arr[p2];
            if(tmp < ans)
                ans=tmp, index=p1;
            
            tmp-=arr[p1];
            p1++;
            p2++;
        }
        cout<<index+1;
    }
    return 0;
}
