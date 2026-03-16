#include <stdio.h>
int main(){
    int n,i,f[10000],now=2;
    bool flag;
    f[0]=2;
    f[1]=3;
    for(i=5;i<60000;i+=2){
        flag=true;
        for(int j=1;f[j]*f[j]<=i&&flag;j++){
            if(i%f[j]==0)flag=false;
        }
        if(flag){
            f[now]=i;
            now++;
        }
    }
    while(scanf("%d",&n)!=EOF){
        for(i=0;f[i]<n;i++);
        if(f[i]==n)printf("%d %d\n",f[i-1],f[i+1]);
        else printf("%d %d\n",f[i-1],f[i]);
    }
}