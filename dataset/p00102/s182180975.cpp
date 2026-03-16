#include <stdio.h>
int main(){
    int n,a[100][100],tot;
    while(1){
        scanf("%d",&n);
        if(n==0)return 0;
        for(int i=0;i<n;i++){
            tot=0;
            for(int j=0;j<n;j++){
                scanf("%d",&a[i][j]);
                tot+=a[i][j];
            }
            a[i][n]=tot;
        }
        for(int j=0;j<=n;j++){
            tot=0;
            for(int i=0;i<n;i++){
                tot+=a[i][j];
            }
            a[n][j]=tot;
        }
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                printf("%5d",a[i][j]);
            }
            printf("\n");
        }
    }
}