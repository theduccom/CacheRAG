#include<iostream>
#include<vector>
#include<string>
#include<string.h>
using namespace std;

char ma[12][12];
bool vi[12][12];
int mv[4][2]={{0,1},{0,-1},{1,0},{-1,0}};

void dfs(int x, int y){
    vi[y][x]=1;
    for(int i=0;i<4;i++){
        int nx=x+mv[i][0],ny=y+mv[i][1];
        if(ny>=0&&nx>=0&&ny<12&&nx<12&&(!vi[ny][nx])&&(ma[ny][nx]=='1'))
            dfs(nx,ny);
    }
}

int main(){
    
    while(cin>>ma[0][0]){
        for(int i=0;i<12;i++){
            for(int j=0;j<12;j++){
                if(!i&&!j)continue;
                cin>>ma[i][j];
            }
        }
        int co=0;
        memset(vi, 0, sizeof(vi));
        for(int i=0;i<12;i++){
            for(int j=0;j<12;j++){
                if(ma[i][j]=='1'&&!vi[i][j]){
                    co++;
                    dfs(j,i);
                }
            }
        }
        cout<<co<<endl;
    }
    
}