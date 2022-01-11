#include<bits/stdc++.h>
using namespace std;


int main(){

    long long n;
	cin >> n;
	long long ans = 1e18;
	for (long long i = 1; i * i <= n; i++)
	{
		if ( n % i == 0)
		{
			ans = min(ans, i + n / i);
		}
	}
	cout << (ans << 1) << endl;


}