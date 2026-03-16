#include<bits/stdc++.h>
using namespace std;
queue <pair<int,int> > blocks;
int w,h,xs,ys,n,xg,yg,c,d,x,y,area[105][105];
bool flag=false;
void solve(int x,int y,int c);

int main(){
    while(1){
        cin >> w >> h;
        if(w==0&&h==0)break;
        cin >> xs >> ys >> xg >> yg >> n;
        for(int i=0;i<n;i++){
            cin >> c >> d >> x >> y;
            if(d==0){
            for(int j=y;j<y+2;j++){
                for(int k=x;k<x+4;k++){
                    area[k][j]=c;
                }
            }
            }else{
            for(int j=y;j<y+4;j++){
                for(int k=x;k<x+2;k++){
                    area[k][j]=c;
                    }
                }
            }
        }
        if(area[xs][ys]!=area[xg][yg]);
        else {
        blocks.push(make_pair(xs,ys));
        solve(blocks.front().first,blocks.front().second,area[xs][ys]);
        }
        if(flag==true)cout << "OK" << endl;
        else cout << "NG" << endl;
        flag=false;
        fill(area[0],area[104],0);
    }

return 0;
}

void solve(int x,int y,int c){
    if(!blocks.empty()){
    blocks.pop();
    if(x==xg&&y==yg){
        flag=true;
        while(!blocks.empty())blocks.pop();
    }else{
        area[x][y]=0;
        if(area[x-1][y]==c)blocks.push(make_pair(x-1,y));
        if(area[x][y-1]==c)blocks.push(make_pair(x,y-1));
        if(area[x+1][y]==c)blocks.push(make_pair(x+1,y));
        if(area[x][y+1]==c)blocks.push(make_pair(x,y+1));
        solve(blocks.front().first,blocks.front().second,c);
        }
    }
}