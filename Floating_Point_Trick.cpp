#include<bits/stdc++.h>
#define setp(n) fixed<<setprecision(n)
using namespace std;
main() {
    ios::sync_with_stdio(0);
    int q;
    long double a;
    cin>>q;
    while(q--) {
        cin>>a;
        cout<<setp(0)<<pow(2,a)<<endl;
    }
    return 0;
}