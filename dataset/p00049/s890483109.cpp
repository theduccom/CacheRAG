#include <stdio.h>
int main(){
    int n,ans[4]={0,0,0,0};
    char a[10]={'\0'};
    while(scanf("%d,%s",&n,a)!=EOF){
        if(a[0]=='B')ans[1]++;
        if(a[0]=='O')ans[3]++;
        if(a[0]=='A'){
            if(a[1]=='B')ans[2]++;
            else ans[0]++;
            a[1]='\0';
        }}
    for(int i=0;i<4;i++)printf("%d\n",ans[i]);
}