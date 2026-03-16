
#include <iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int a[10][10],n,i,j,tate[10]={0},yoko[10]={0},sum=0;
    while(cin>>n){
        if(n==0)break;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>a[i][j];
                sum+=a[i][j];
                yoko[i]+=a[i][j];
                tate[j]+=a[i][j];
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<=n;j++){
                if(j==n)printf("%5d\n",yoko[i]);
                else printf("%5d",a[i][j]);
            }
        }
        for(j=0;j<=n;j++){
            if(j!=n)printf("%5d",tate[j]);
            else if(j==n)printf("%5d\n",sum);
        }
        for(i=0;i<10;i++){
            tate[i]=0;
            yoko[i]=0;
        }
        sum=0;
    }
     return 0;
}