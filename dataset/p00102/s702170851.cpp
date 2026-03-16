#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    while(true){
        int n;
        scanf("%d",&n);
        if(n==0) return 0;
        int a[n+1][n+1];
        fill(a[0],a[0]+(n+1)*(n+1),0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&a[i][j]);
                a[i][n]+=a[i][j];
                a[n][j]+=a[i][j];
                a[n][n]+=a[i][j];
                printf("%5d",a[i][j]);
            }
            printf("%5d\n",a[i][n]);
        }
        for(int i=0;i<=n;i++){
            printf("%5d",a[n][i]);
        }
        printf("\n");
    }
}