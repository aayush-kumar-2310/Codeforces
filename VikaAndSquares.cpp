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

int n;
int ar[200001];
set<int> mset;
long long ans;
 
int32_t main(){

	fast
	
	cin >> n;
	int mn = 1e9;
 
	for (int i = 1; i <= n; i++)
	{
		cin >> ar[i];
		mn = min(mn, ar[i]);
	}
 
	for (int i = 1; i <= n; i++)
	{
		if (ar[i] == mn)
		{
			mset.insert(i);
			mset.insert(i + n);
		}
	}
 
	ans = 0;
 
	for (int i = 1; i <= n; i++)
	{
		set<int>::iterator it = mset.lower_bound(i);
		int ohead = (*it) - i;
		ans = max(ans, 1ll * mn*n + ohead);
	}
 
	cout << ans << endl;
 
	cin.get(); cin.get();
 
	return 0;
}