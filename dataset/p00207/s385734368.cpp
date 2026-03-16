#include<iostream>
using namespace std;
int w,h,xs,ys,xg,yg,n;
int map[101][101];
string ans;
char start;
void fun(int y,int x){
    if(map[y][x]==start){
        map[y][x]=7;
    }
    else
        return;
    if(x<1||w<x||y<1||h<y)
        return;
    if(map[y][x]==map[yg][xg]){
        ans="OK";
        return;
    }
    fun(y,x+1);
    fun(y,x-1);
    fun(y+1,x);
    fun(y-1,x);
}
void mc(){
    int c,d,x,y;
    for(int i=0;i<n;i++){
        cin >> c >> d >> x >> y;
        if(d==0){
            for(int j=0;j<2;j++){
                for(int k=0;k<4;k++){
                    map[y+j][x+k]=c;
                }
            }
        }
        else{
            for(int j=0;j<4;j++){
                for(int k=0;k<2;k++){
                    map[y+j][x+k]=c;
                }
            }
        }
    }
}
int main(){
    while(cin >> w >> h,w){
    	ans="NG";
        cin >> xs >> ys >> xg >> yg >> n;
        for(int i=1;i<=h;i++){
            for(int j=1;j<=w;j++){
                map[i][j]=0;
            }
        }
        mc();
        start=map[ys][xs];
        if(map[ys][xs]==0||map[yg][xg]==0);
        else
        	fun(ys,xs);
        cout << ans << endl;
    }
}