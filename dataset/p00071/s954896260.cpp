#include<iostream>
#include<cstdio>
using namespace std;

int fld[8][8];

int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};

void dfs(int y,int x){
    fld[y][x]=0;
    for(int i=0;i<4;i++){
        for(int k=1;k<=3;k++){
            int ny=y+dy[i]*k;
            int nx=x+dx[i]*k;
            if(ny<0||ny>=8||nx<0||nx>=8||fld[ny][nx]==0)continue;
            dfs(ny,nx);
        }
    }
}

void solve(int C){
    for(int i=0;i<8;i++){
        char str[10];
        cin>>str;
        for(int j=0;j<8;j++){
            fld[i][j]=str[j]-'0';
        }
    }

    int sy,sx;
    cin>>sx>>sy;
    sx--;sy--;
    dfs(sy,sx);

    printf("Data %d:\n",C+1);
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            printf("%d",fld[i][j]);
        }
        puts("");
    }
}

int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++)solve(i);
    return 0;
}