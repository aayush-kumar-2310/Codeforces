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

const int N = 111111;
const int INF = (1<<30);
 
int n, a[N], b[3];
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
	    
        int sz = 0;
  cin >> n;
  for (int i = 1, t; i <= n; ++i) {
		cin >> t;
		if (t!=0) {
			a[sz++] = t;
			if (i==n) goto again;
		} else {
			again:
			int a1=INF, a2=INF, a3=INF;
			
			int k = 0;
			while (k<sz) {
				if (a1==INF or a[k]>a[a1]) a1=k;
				++k;
			}
			
			k=0;
			while (a1!=INF and k<sz) {
				if (k!=a1 and (a2==INF or a[k]>a[a2])) a2=k;
				++k;
			}
			
			k=0;
			while (a2 != INF and k<sz) {
				if (k!=a1 and k!=a2 and (a3==INF or a[k]>a[a3])) a3=k;
				++k;
			}
			
			b[0]=a1; b[1]=a2; b[2]=a3;
			std::sort(b,b+3);
			int stat = 0;
			int statCount = 0;
			while (statCount<3 and b[statCount]!=INF) statCount++;
			
			for (int j=0; j<sz; ++j) {
				if (stat<statCount and j==b[stat]) {
					if (stat==0) { cout << "pushFront\n"; ++stat; }
					else if (stat==1) { cout << "pushQueue\n"; ++stat; }
					else if (stat==2) { cout << "pushStack\n"; ++stat; }
				} else {
					cout << "pushBack\n";
				} 
			}
			
			if (t==0) {
				int ans = 0;
				if (a1!=INF) ++ans;
				if (a2!=INF) ++ans;
				if (a3!=INF) ++ans;
				
				if (ans==0) cout << "0\n";
				else if (ans==1) cout << "1 popFront\n";
				else if (ans==2) cout << "2 popFront popQueue\n";
				else if (ans==3) cout << "3 popFront popQueue popStack\n";
			}
			
			sz = 0;
		}
	}
}
}