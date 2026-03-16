#include<iostream>
#include<string.h>
using namespace std;

int m,n,w,h;

char b[102][102];
bool v[102][102];

void dfs(int y,int x){
    if(v[y][x]){cout<<"LOOP"<<endl;return;}
    v[y][x]=1;
    if(b[y][x]=='>')
        return dfs(y,x+1);
    if(b[y][x]=='v')
        return dfs(y+1,x);
    if(b[y][x]=='<')
        return dfs(y,x-1);
    if(b[y][x]=='^')
        return dfs(y-1,x);
    if(b[y][x]=='.')
        cout<<x<<" "<<y<<endl;
}
int main(){
    
    while(cin>>h>>w,w||h){
        for(int i=0;i<h;i++)
            cin>>b[i];
        memset(v,0,sizeof(v));
        dfs(0,0);
    }
}