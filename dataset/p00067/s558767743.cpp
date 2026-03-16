#include <iostream>
#include <cstdio>

using namespace std;

void dfs(int x,int y);

char field[12][13];

int main(void){
    int i,j;
    int count;
    while(cin.get()!=EOF){
        count=0;
        for(i=0;i<12;i++){
            cin.getline(field[i],13,'\n');
        }
        for(i=0;i<12;i++){
            for(j=0;j<12;j++){
                if(field[i][j]=='1'){
                    count++;
                    dfs(i,j);
                }
            }
        }
        if(cin.eof())break;
        cout<<count<<endl;
    }
    return(0);
}

void dfs(int x,int y){
    int dx[]={0,0,1,-1};
    int dy[]={1,-1,0,0};
    int nx,ny;
    int i;
    
    field[x][y]='0';
    
    for(i=0;i<4;i++){
        nx=x+dx[i];
        ny=y+dy[i];
        if(0<=nx&&nx<12&&0<=ny&&ny<12){
            if(field[nx][ny]=='1'){
                dfs(nx,ny);
            }
        }
    }
    return;
    
}