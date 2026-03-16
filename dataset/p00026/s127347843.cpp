#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
#define PI 3.1415926535897932384626433
using namespace std;
int main(){
    int fie[10][10]={0};
    int x,y,s;
    while(scanf("%d,%d,%d",&x,&y,&s)!=EOF){
        for(int i=-2;i<=2;i++){
            for(int j=-2;j<=2;j++){
                if(0<=x+j&&x+j<=9&&0<=y+i&&y+i<=9){
                    if((s==1&&abs(i)+abs(j)<=1)||(s==2&&abs(i)<=1&&abs(j)<=1)||(s==3&&abs(i)+abs(j)<=2))fie[y+i][x+j]++;
                }
            }
        }
    }
    int ans0=0,ans1=1;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(!fie[i][j])ans0++;
            ans1=max(ans1,fie[i][j]);
        }
    }
    cout<<ans0<<endl<<ans1<<endl;
    return 0;
}