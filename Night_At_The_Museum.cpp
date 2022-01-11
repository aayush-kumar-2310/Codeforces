#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
	while(cin>>s) {
		int a = 0, ans = 0;
		for(char c : s) {
			int b = c - 'a';
			ans += min({ abs(a - b), a + 26 - b, b + 26 - a});
			a = b;
		}
		cout<<ans;
    }
}