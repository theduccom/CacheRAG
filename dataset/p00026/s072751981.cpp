#include <stdio.h>
int main(){
    int a[14][14],x,y,k,ans=0,top=0;
    for(int i=0;i<14;i++)
        for(int j=0;j<14;j++)
            a[i][j]=0;
    while(scanf("%d,%d,%d",&x,&y,&k)!=EOF){
        a[x+1][y+2]++;
        a[x+2][y+2]++;
        a[x+3][y+2]++;
        a[x+2][y+1]++;
        a[x+2][y+3]++;
        if(k>1){
            a[x+3][y+3]++;
            a[x+1][y+1]++;
            a[x+3][y+1]++;
            a[x+1][y+3]++;
        }
        if(k>2) {
            a[x+4][y+2]++;
            a[x][y+2]++;
            a[x+2][y]++;
            a[x+2][y+4]++;
        }
    }
    for(int i=2;i<12;i++){
        for(int j=2;j<12;j++){
            if(a[i][j]==0)ans++;
            if(a[i][j]>top)top=a[i][j];
        }
    }
    printf("%d\n%d\n",ans,top);
}