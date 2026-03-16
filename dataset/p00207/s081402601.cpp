#include <iostream>
#include <string.h>
#include <queue>
using namespace std;
struct q{
    int x,y,color,cnt;
};
queue <q> pipe;
q Main,sub;
int sy,sx;
int gy,gx;
int w,h,n;
int board[101][101];
int visited[101][101];
int state[4];

void put(int mode,int color,int x,int y);

int main(void){
    cin>>w>>h;
    while(w!=0&&h!=0){
        cin>>sx>>sy;
        cin>>gx>>gy;
        cin>>n;
        memset(board,0,sizeof(board));
        memset(visited,0,sizeof(visited));
        for(int i=0;i<n;i++){
            cin>>state[0]>>state[1]>>state[2]>>state[3];
            put(state[1],state[0],state[2],state[3]);
        }
        
        Main.x=sx;
        Main.y=sy;
        Main.cnt=0;
        Main.color=board[sx][sy];
        visited[sx][sy]=1;
        pipe.push(Main);
        
        int mx,fx[]={0,1,0,-1};
        int my,fy[]={1,0,-1,0};
        
        while(!pipe.empty()){
            Main=pipe.front();
            pipe.pop();
            for(int i=0;i<4;i++){
                mx=Main.x+fx[i];
                my=Main.y+fy[i];
                if(mx>=1&&mx<=100&&my>=1&&my<=100&&Main.color==board[mx][my]&&visited[mx][my]==0){
                    sub=Main; visited[mx][my]=1;
                    sub.x=mx; sub.y=my; sub.cnt++;
                    pipe.push(sub);
                }
            }
        }
        if(visited[gx][gy]==1){cout<<"OK"<<endl;}
        else{cout<<"NG"<<endl;}
        cin>>w>>h;
    }
}

void put(int mode,int color,int x,int y){
    int X[2],Y[2];
    X[0]=4; Y[0]=2;
    X[1]=2; Y[1]=4;
    for(int i=x;i<x+X[mode];i++){
        for(int j=y;j<y+Y[mode];j++){
            board[i][j]=color;
        }
    }
}
