#include<iostream>
#include<string.h>
using namespace std;

int m,n,w,h;
char b[102][102];
bool v[102][102];

void dfs(int y,int x){
    if(v[y][x]){
        cout<<"LOOP"<<endl;
        return;
    }
    v[y][x]=1;
    switch(b[y][x]){
        case '>':
            dfs(y,x+1);
            break;
        case 'v':
            dfs(y+1,x);
            break;
        case '<':
            dfs(y,x-1);
            break;
        case '^':
            dfs(y-1,x);
            break;
        default:
            cout<<x<<" "<<y<<endl;
    }
}

int main(){
    while(cin>>h>>w,w||h){
        for(int i=0;i<h;i++)
            cin>>b[i];
        memset(v,0,sizeof(v));
        dfs(0,0);
    }
}