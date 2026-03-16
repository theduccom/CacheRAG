#include<bits/stdc++.h>
using namespace std;
int w,h,xs,ys,n,xg,yg,c,d,x,y,area[105][105],c_area[105][105];
int x_p[4]={-1,0,1,0},y_p[4]={0,-1,0,1};

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
        solve(xs,ys,area[xs][ys]);
        }
        if(flag==true)cout << "OK" << endl;
        else cout << "NG" << endl;
        flag=false;
        fill(area[0],area[104],0);
    }

return 0;
}

void solve(int x,int y,int c){

    if(x==xg&&y==yg){
        flag=true;
    return;
    }else{
        for(int i=0;i<4;i++){
        if(area[x+x_p[i]][y+y_p[i]]==c){
                //c_area[x][y]=area[x][y];
                area[x][y]=0;
                solve(x+x_p[i],y+y_p[i],c);
                //area[x][y]=c_area[x][y];
            }
        }
    }
}