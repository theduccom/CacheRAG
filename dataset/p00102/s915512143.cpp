#include<stdio.h>
#include<string.h>
#include<math.h>

int main(void){

    int n;
    int i,j;
    for(;;){
    scanf("%d",&n);
    if(n==0)break;
    int a[11][11]={{0}};
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            }
        }
    for(i=0;i<n;i++){
        a[n][i]=a[0][i]+a[1][i]+a[2][i]+a[3][i]+a[4][i]+a[5][i]+a[6][i]+a[7][i]+a[8][i]+a[9][i];
    }
    for(j=0;j<n+1;j++){
        a[j][n]=a[j][0]+a[j][1]+a[j][2]+a[j][3]+a[j][4]+a[j][5]+a[j][6]+a[j][7]+a[j][8]+a[j][9];
    }
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            printf("%5d",a[i][j]);
            }
            printf("\n");
        }
    }
return 0;
}