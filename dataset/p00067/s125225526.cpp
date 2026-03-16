#include<iostream>
using namespace std;
string ins[12];
int ve[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
void nuri(int x,int y){
    ins[x][y]='0';
    for(int i=0;i<4;i++){
        int nx=x+ve[i][0],ny=y+ve[i][1];
        if(0<=nx&&nx<12&&0<=ny&&ny<12&&ins[nx][ny]=='1')nuri(nx,ny);
    }
}
int main(){
    for(;;){
        for(int i=0;i<12;i++){
            if(!(cin>>ins[i]))return 0;
        }
        int ans=0;
        for(int i=0;i<12;i++){
            for(int j=0;j<12;j++){
                if(ins[i][j]=='1'){
                    nuri(i,j);
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}