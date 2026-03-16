#include<stdio.h>
int g[20][20];
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=0;i<a;i++)
        for(int j=0;j<a;j++)
            g[i][j]=99999999;
    for(int i=0;i<b;i++){
        int c,d,e,f;
        scanf("%d,%d,%d,%d",&c,&d,&e,&f);
        g[c-1][d-1]=e;
        g[d-1][c-1]=f;
    }
    int c,d,e,f;
    scanf("%d,%d,%d,%d",&c,&d,&e,&f);
    for(int k=0;k<a;k++)
        for(int i=0;i<a;i++)
            for(int j=0;j<a;j++)
                if(g[i][j]>g[i][k]+g[k][j])g[i][j]=g[i][k]+g[k][j];
    printf("%d\n",e-f-g[c-1][d-1]-g[d-1][c-1]);
}
