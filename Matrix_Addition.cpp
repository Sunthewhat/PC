#include<bits/stdc++.h>;
using namespace std;
main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int m,n,a[110][110],k;
    cin>>m>>n;
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cin>>k;
            a[i][j]+=k;
        }
    }
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}