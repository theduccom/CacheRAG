#include <iostream>
using namespace std;

const int x1[]={1, 0, -1, 0};
const int y1[]={0, -1, 0, 1};
const int x2[]={1,  1, -1, -1};
const int y2[]={1, -1, -1,  1};
const int x3[]={2, 0, -2, 0};
const int y3[]={0, -2, 0, 2};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int paper[10][10]={};
    int x, y, s;
    while(cin>>x){
        cin.ignore();
        cin>>y;
        cin.ignore();
        cin>>s;
        ++paper[y][x];
        int nx, ny;
        for(int i=0; i<4; i++){
            nx=x+x1[i];
            ny=y+y1[i];
            if(0<=nx&&nx<10&&0<=ny&&ny<10) ++paper[ny][nx];
            if(s>=2){
                nx=x+x2[i];
                ny=y+y2[i];
                if(0<=nx&&nx<10&&0<=ny&&ny<10) ++paper[ny][nx];
            }
            if(s>=3){
                nx=x+x3[i];
                ny=y+y3[i];
                if(0<=nx&&nx<10&&0<=ny&&ny<10) ++paper[ny][nx];
            }
        }
    }
    int max=0, count=0;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(paper[i][j]==0) ++count;
            else if(max<paper[i][j]) max=paper[i][j];
        }
    }
    cout<<count<<'\n'<<max<<'\n';
    return 0;
}