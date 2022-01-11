#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
struct sgm
{
    int lVal;
    int rVal;
    int cVal;

    bool operator==(const sgm& other) const {
        return lVal == other.lVal && rVal == other.rVal;
    }

    bool operator!=(const sgm& other) const {
        return !(*this == other);
    }

    bool operator>(const sgm& other) const {
        return lVal < other.lVal || rVal > other.rVal;
    }
};



int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        sgm arr[n];
        for (int i=0; i<n; i++) 
            cin >> arr[i].lVal >> arr[i].rVal >> arr[i].cVal;
        
        sgm minlVal = arr[0];
        sgm maxrVal = arr[0];
        sgm maxLen = arr[0];

        cout<<arr[0].cVal<<endl;
        for (int s = 1; s < n; ++s) {
            // answer[s] = answer[s - 1];
            if (arr[s].lVal < minlVal.lVal) minlVal = arr[s];
            if (arr[s].lVal == minlVal.lVal && arr[s].cVal < minlVal.cVal) minlVal = arr[s];
            if (arr[s].rVal > maxrVal.rVal) maxrVal = arr[s];
            if (arr[s].rVal == maxrVal.rVal && arr[s].cVal < maxrVal.cVal) maxrVal = arr[s];
            if (arr[s].lVal == minlVal.lVal && arr[s].rVal == maxrVal.rVal) {
                if (arr[s] == maxLen) {
                    if (maxLen.cVal > arr[s].cVal) maxLen = arr[s];
                } else {
                    maxLen = arr[s];
                }
            } 
            if (maxLen.lVal == minlVal.lVal && maxLen.rVal == maxrVal.rVal) 
                cout << min(maxLen.cVal, minlVal.cVal + maxrVal.cVal)<<endl;

            else 
                cout << minlVal.cVal + maxrVal.cVal<<endl; 
        }
    }
}