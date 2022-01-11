#include<bits/stdc++.h>
using namespace std;
const double PI = acos(-1.0);
int main(){

    double d, h, v, e;
	cin >> d >> h >> v >> e;
	double s = PI * (d * d) / 4;
	double u = e * s;
	if (u >= v) {
		printf("NO\n");
	}
	else {
		double ans = h * s / (v - u);
		printf("YES\n%.10f", ans);
	}
	return 0;
}