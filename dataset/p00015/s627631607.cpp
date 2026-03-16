#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        string a,b;
        cin>>a>>b;
        int numa[100000]={0},numb[100000]={0};
        int flag=0;
        int sum[81]={0};
        if(80<max(a.size(),b.size())){
            puts("overflow");
            goto exit;
        }
        for(int i=a.size()-1,k=0;0<=i;i--,k++)numa[k]=a[i]-'0';
        for(int i=b.size()-1,k=0;0<=i;i--,k++)numb[k]=b[i]-'0';
        for(int i=0;i<max(a.size(),b.size());i++){
            sum[i]+=(numa[i]+numb[i]);
            sum[i+1]=sum[i]/10,sum[i]=sum[i]%10;
            if(sum[80]!=0){
                puts("overflow");
                goto exit;
            }
        }
        for(int i=80;0<=i;i--){
            if(flag==1||sum[i]!=0)flag=1;
            if(flag==1)printf("%d",sum[i]);
        }
        if(flag==0)printf("0");
        puts("");
exit:
;
    }
    return 0;
}