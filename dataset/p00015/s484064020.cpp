#include <stdio.h>
int main(){
    int n,now,k,top=0;
    char a[1000],temp[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    for(int j=0;j<1000;j++)a[j]=temp[j]='\0';
    for(int m=0;m<2;m++){
       scanf("%s",temp);
        top=k=now=0;
        while(temp[now]!='\0')now++;
        for(int j=now-1;j>=0;j--){
            if(a[now-j-1]=='\0')a[now-j-1]+='0';
            a[now-j-1]+=temp[j]+k-'0';
            k=0;
            if(a[now-j-1]-'0'>9){
                a[now-j-1]-=10;
                k++;
            }
        }
        while(k!=0){
            if(a[now]=='\0')a[now]+='0';
            a[now]+=k;
            k=0;
            if(a[now]-'0'>9){
                a[now]-=10;
                k++;
            }
            now++;
        }
        }
        while(a[top]!='\0')top++;
        if(top>80)printf("overflow\n");
        else{
            for(int i=top-1;i>=0;i--)printf("%c",a[i]);
            printf("\n");
        }
    }
    }