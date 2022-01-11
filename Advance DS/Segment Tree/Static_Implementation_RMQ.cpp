#include<bits/stdc++.h>
using namespace std;
 
vector<int> segTree, arr;
 
void buildTree(int index, int r_low, int r_high){
 
    
    if(r_low == r_high){
        segTree[index] = arr[r_low];
        return;
    }
 
    int mid = (r_low + r_high)/2;
 
    buildTree(2*index+1, r_low, mid);
    buildTree(2*index+2, mid+1, r_high);
    segTree[index] = min(segTree[2*index+1], segTree[2*index+2]);
}
 
int query(int index, int r_low, int r_high, int q_low, int q_high){
 
    if(q_high<r_low or q_low>r_high)
        return INT_MAX;
 
    if(q_low<=r_low and q_high>=r_high)
        return segTree[index];
    
    int mid = (r_low+r_high)/2;
    int x = query(index*2+1, r_low, mid, q_low, q_high);
    int y = query(index*2+2, mid+1, r_high, q_low, q_high);
    return min(x, y);
    
}
 
int main(){
 
    int n,q; cin>>n>>q;
    arr.resize(n);
    segTree.resize(4*n);
    fill(segTree.begin(), segTree.end(), INT_MAX);
 
    for(int i=0; i<n; i++)
        cin>>arr[i];
 
    buildTree(0, 0, n-1);
    
    // for(auto it:segTree)
    //     cout<<it<<" ";
    // cout<<endl;
 
    for(int i=0; i<q; i++){
        int l,r; cin>>l>>r;
        cout<<query(0, 0, n-1, l-1, r-1)<<endl;
    }
    
}