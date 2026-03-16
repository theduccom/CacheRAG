#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int fie[101][101],ans,gol[101][101],st[101][101],col,muki,bx,by;
int bex[4]={0,1,0,-1},bey[4]={1,0,-1,0},cou,a,b;
    int sx,sy,gx,gy,n;
int func(int y,int x){
    if(fie[sy][sx]==-1)return 0;
    if(y<1||x<1||y>b||x>a)return 0;
    if(fie[y][x]==ans){
        fie[y][x]=0;
        for(int i=0;i<4;i++){
            func(y+bey[i],x+bex[i]);
        }
    }
    return 0;
}
int main(){
    for(;;){
        cin>>a>>b;
        if(a==0&&b==0)break;
        fill(fie[0],fie[0]+101*101,-1);
        cin>>sx>>sy>>gx>>gy;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>col>>muki>>bx>>by;
            if(muki==0){
                for(int i=0;i<=1;i++){
                    for(int j=0;j<=3;j++){
                        fie[by+i][bx+j]=col;
                    }
                }
            }
            if(muki==1){
                for(int i=0;i<=3;i++){
                    for(int j=0;j<=1;j++){
                        fie[by+i][bx+j]=col;
                    }
                }
            }
        }
        ans=fie[sy][sx];
        if(fie[sy][sx]!=0){
            func(sy,sx);
        }
        /*for(int i=1;i<=a;i++){
            for(int j=1;j<=b;j++){
                cout<<fie[i][j];
            }
            cout<<endl;
        }*/
        if(!fie[gy][gx])cout<<"OK"<<endl;
        else cout<<"NG"<<endl;
        cou=0;
        /*for(int i=1;i<=a;i++){
            for(int j=1;j<=b;j++){
                cout<<fie[i][j];
            }
            cout<<endl;
        }*/
    }
return 0;
}
/*6 5
1 1
5 5
3
2 0 1 1
2 0 2 3
2 0 2 5
*/