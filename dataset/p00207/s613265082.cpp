#include<cstdio>
#include<iostream>
#include<algorithm>
#define int long long
using namespace std;
int w,h,sx,sy,gx,gy,n,c,d,x,y,sc;
int fld[101][101];
int dx[]={1,0,-1,0},dy[]={0,1,0,-1};
void dfs(int fx,int fy){
    if(fld[fy][fx]!=sc||fx<1||fy<1||fx>w||fy>h)return;
    fld[fy][fx]=0;
    for(int i=0;i<4;i++){
        dfs(fx+dx[i],fy+dy[i]);
    }
}
signed main(){
    for(;;){
        cin>>w>>h;
        if(w==0&&h==0)break;
        cin>>sx>>sy>>gx>>gy>>n;
        fill(fld[0],fld[0]+101*101,-1);
        for(int i=0;i<n;i++){
            cin>>c>>d>>x>>y;
            if(d==0){
                for(int j=0;j<2;j++){
                    for(int k=0;k<4;k++){
                        fld[y+j][x+k]=c;
                    }
                }
            }
            if(d==1){
                for(int j=0;j<4;j++){
                    for(int k=0;k<2;k++){
                        fld[y+j][x+k]=c;
                    }
                }
            }
        }
        sc=fld[sy][sx];
        dfs(sx,sy);
        if(fld[gy][gx]==0)cout<<"OK"<<endl;
        else cout<<"NG"<<endl;
    }
    return 0;
}