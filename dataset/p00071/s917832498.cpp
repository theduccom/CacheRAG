#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <vector>
using namespace std;

const int dx[]={0,1,-1,0};
const int dy[]={1,0,0,-1};
char field[8][9];

void dfs(int sy,int sx,int d=0,int depth=0){
    if(field[sy][sx]=='0'){
        if(depth==3){
            return;
        }
        if(sy+dy[d]>=0 && sy+dy[d]<8 && sx+dx[d]>=0 && sx+dx[d]<8){
            dfs(sy+dy[d],sx+dx[d],d,depth+1);
        }
    }else{
        field[sy][sx]='0';
        for(int dir=0;dir<4;dir++){
            if(sy+dy[dir]>=0 && sy+dy[dir]<8 && sx+dx[dir]>=0 && sx+dx[dir]<8){
                dfs(sy+dy[dir],sx+dx[dir],dir,1);
            }
        }
    }
}

int main(){
    int ds;
    int num=1;

    cin>>ds;

    while(ds--){
        int sx,sy;

        cin.ignore(2);
        for(int i=0;i<8;i++){
            cin>>field[i];
        }

        cin>>sx>>sy;

        dfs(sy-1,sx-1);

        cout<<"Data "<<num++<<":"<<endl;

        for(int i=0;i<8;i++){
            cout<<field[i]<<endl;
        }
    }

    return 0;
}