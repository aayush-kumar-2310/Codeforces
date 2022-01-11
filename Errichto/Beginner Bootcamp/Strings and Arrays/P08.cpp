#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,t,L;int a,b;
	cin>>n>>t>>L;int ans=0;int f=0;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		ans=ans+(a-f)/L;
		f=a+b;
	} 
	cout<<ans+(t-f)/L;
}