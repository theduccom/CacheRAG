#include<iostream>
using namespace std;

char ma[8][8];
int x,y,n;

void dfs(int x,int y){
    ma[y][x]='0';
    for(int i=1;i<4;i++){
        if(y-i>=0&&ma[y-i][x]=='1')dfs(x,y-i);
        if(y+i<8&&ma[y+i][x]=='1')dfs(x,y+i);
        if(x-i>=0&&ma[y][x-i]=='1')dfs(x-i,y);
        if(x+i<8&&ma[y][x+i]=='1')dfs(x+i,y);
    }
}

int main(){
    cin>>n;
    for(int c=1;c<=n;c++){
        for(int i=0;i<8;i++)
            for(int j=0;j<8;j++)
                cin>>ma[i][j];
        cin>>x>>y;
        dfs(x-1,y-1);
        cout<<"Data "<<c<<":"<<endl;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++)
                cout<<ma[i][j];
            cout<<endl;
        }
    }
}