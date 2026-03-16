#include<bits/stdc++.h>
using namespace std;
int bord[101][101]={},playx[2],playy[2];
int movex[]={1,0,-1,0},movey[]={0,1,0,-1};
int serch(int x,int y,int color)
{
    if(color==0)return 0;
    int now=0;
    bord[y][x]=0;
    if(x==playx[1]&&y==playy[1])return 1;
    for(int i=0;i<4&&now==0;i++){
        if(bord[movey[i]+y][movex[i]+x]==color)now=serch(movex[i]+x,movey[i]+y,color);
    }
    return now;
}
int main()
{
    int  h,w;
    while(cin>>h>>w,h,w){
        for(int i=0;i<=h+1;i++){
                for(int j=0;j<=w+1;j++){
                        bord[i][j]=0;
                }
        }
        for(int i=0;i<2;i++)cin>>playx[i]>>playy[i];
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int co,mu,x,y;
            cin>>co>>mu>>x>>y;
            for(int j=0;j<4;j++){
                if(mu==1){
                    bord[y+j][x]=co;
                    bord[y+j][x+1]=co;
                }
                else{
                    bord[y][x+j]=co;
                    bord[y+1][x+j]=co;
                }
            }
        }
        if(serch(playx[0],playy[0],bord[playy[0]][playx[0]]))cout<<"OK\n";
        else cout<<"NG\n";
    }
}