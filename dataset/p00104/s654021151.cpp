#include<cstdio>
using namespace std;
int g_x,g_y;
char field[105][105];
void solve(int y,int x);
int main(){

    int h,w;
    while(scanf("%d %d",&h,&w),!h==0 && !w==0){
        for(int i=0;i<h;i++){
            scanf("%s",field[i]);
        }
        solve(0,0);
        if(g_x==-1 && g_y==-1)puts("LOOP");
        else printf("%d %d\n",g_x,g_y);
    }
    return 0;

}

void solve(int y,int x){
    if(field[y][x]=='0'){
        g_x=g_y=-1;
        return;
    }
    if(field[y][x]=='.'){
        g_x=x;
        g_y=y;
        return;
    }
    if(field[y][x]=='>'){
        field[y][x]='0';
        solve(y,x+1);
    }
    if(field[y][x]=='<'){
        field[y][x]='0';
        solve(y,x-1);
    }
    if(field[y][x]=='^'){
        field[y][x]='0';
        solve(y-1,x);
    }
    if(field[y][x]=='v'){
        field[y][x]='0';
        solve(y+1,x);
    }
}