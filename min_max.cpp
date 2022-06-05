#include<bits/stdc++.h>
using namespace std;
main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int n,i,mn=2e9,mx=-2e9;
    cin>>n;
    for (int j=0;j<n;j++) {
        cin>>i;
        mn=min(mn,i);
        mx=max(mx,i);
    }
    cout<<mn<<endl<<mx;
    return 0;
}