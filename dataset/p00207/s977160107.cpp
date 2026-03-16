#include <iostream>
using namespace std;

int F[102][102];
int color,gx,gy;
bool maze;

void DFS1(int Y,int X){
    if(F[Y][X]!=color)return;
    if(Y==gy&&X==gx)maze=true;
    
    F[Y][X]=0;
    
    DFS1(Y-1,X  );
    DFS1(Y  ,X-1);
    DFS1(Y  ,X+1);
    DFS1(Y+1,X  );
}

int main(){
    int N,M,sx,sy,n;
    cin >> N >> M;
    while(N!=0&&M!=0){
        cin >> sx >> sy >> gx >> gy >> n;
        int c,d,nx,ny;
        for(int i=0;i<n;i++){
            cin >> c >> d >> nx >> ny;
            for(int y=ny;y<ny+2*(1+d);y++){
                for(int x=nx;x<nx+2*(2-d);x++){
                    F[y][x] = c;
                }
            }
        }

        color = F[sy][sx];
        maze = false;
        if(color!=0){
            DFS1(sy,sx);
        }
        cout << (maze?"OK":"NG") << endl;
        for(int y=0;y<102;y++){
            for(int x=0;x<102;x++){
                F[y][x] = 0;
            }
        }
        cin >> N >> M;
    }
    return 0; 
}