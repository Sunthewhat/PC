#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,m,n,a[110][110],j,b;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b);
            a[i][j]+=b;
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
          printf("%d ", a[i][j]);
        }printf("\n");
    }
    return 0;
}