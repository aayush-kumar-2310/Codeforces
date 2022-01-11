#include<bits/stdc++.h>
#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
 
using namespace std;
 
 
 
int main()
{
	int x,n,a,b;
	cin >> n >> x;
	int bot = 7 - x;
		cin >> a >> b;
		int flag=1;
	for(int i=1; i < n; i++)
	{
		cin>>a>>b;
		if(!(bot!=a && bot!=b && 7-bot!=a && 7-bot!=b))
		{
			flag=0;
			
		}
		bot=7-bot;
		
	}
	if(flag)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}