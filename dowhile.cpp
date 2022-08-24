#include<bits/stdc++.h>
#define setp(n) fixed<<setprecision(n)
using namespace std;
main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int a,i=1,j=0;
    scanf("%d",&a);
    while (a--) {
        j=i;
        while (j--)
        {
            printf("*");
        }
        printf("\n");
        i++;
    }
    return 0;
}