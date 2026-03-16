#include <stdio.h>
int main(){
    int now,ans=0;
    bool f;
    char a[10000];
    for(int i=0;i<10000;i++)a[i]='\0';
    while(scanf("%s",a)!=EOF){
        now=0;
        f=true;
        while(a[now]!='\0')now++;
        if(now%2==1){
            now/=2;
            for(int i=1;i<=now&&f;i++){
                if(a[i+now]!=a[now-i])f=false;
            }
            if(f)ans++;
        }
        else{
            now/=2;
            for(int i=0;i<now&&f;i++){
                if(a[now-1-i]!=a[now+i])f=false;
            }
            if(f)ans++;
        }
        for(int i=0;i<10000;i++)a[i]='\0';
    }
    printf("%d\n",ans);
}