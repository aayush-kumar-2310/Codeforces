#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

    int t; cin>>t;

    while(t--){
        string a, s;
    cin >> a >> s;
    int n = a.size(), m = s.size();
    string ans = "1-";
    auto go = [&] (auto&& go, int i, int j, string& cur)->bool {
        if (i < 0 && j == -1) {
            ans = cur;
            return true;
        }
        if (j == -1) return false;
        for (int dig = 0; dig < 10; dig++) {
            int sum = (i < 0 ? 0 : a[i] - '0') + dig;
            string now = to_string(sum);
            cur.push_back('0' + dig);
            if (now == s.substr(j, 1) && go(go, i-1, j-1, cur)) return true;
            if (j-1 >= 0 && now == s.substr(j-1, 2) && go(go, i-1, j-2, cur)) return true;
            
            cur.pop_back();
        }
        return false;
    };
    string cur;
    go(go, n-1, m-1, cur);
    while (ans.empty() == false && ans.back() == '0') {
        ans.pop_back();
    }
    reverse(ans.begin(), ans.end());
    cout << ans << "\n";
        
}
}
