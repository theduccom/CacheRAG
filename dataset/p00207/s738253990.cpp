#include <iostream>
using namespace std;

int f[102][102];

void DFS(int x,int y,int c){
    if(f[x][y]!=c)  return;

    f[x][y]=10;
    DFS(x+1,y,c);
    DFS(x-1,y,c);
    DFS(x,y+1,c);
    DFS(x,y-1,c);
}

int main(){
    int w,h;
    int xs,ys;
    int xg,yg;
    int n;
    while(true){
        cin>>w>>h;
        if(w+h==0)  break;
        for(int i=1;i<=h;i++){
            for(int j=1;j<=w;j++){
                f[i][j]=-1;
            }
        }
        cin >> xs >> ys;
        cin >> xg >> yg;
        cin >> n;
        for(int i=0;i<n;i++){
            int c,d,x,y;
            cin >> c >> d >> x >> y;
            if(d==0){
                for(int j = 0; j<4; j++){
                    for(int k = 0; k<2; k++){
                        f[x+j][y+k] = c;
                    }
                }
            }else{
                for(int j = 0; j<2; j++){
                    for(int k = 0; k<4; k++){
                        f[x+j][y+k] = c;
                    }
                }
            }
        }
        DFS(xs,ys,f[xs][ys]);
        if(f[xg][yg]==10){
            cout<<"OK"<<endl;
        }else{
            cout<<"NG"<<endl;
        }
    }
    return 0;
}
