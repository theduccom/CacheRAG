#include <iostream>
#include <algorithm>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define loop(i,n) rep(i,0,n)

int main(){
    char b[8][9];
    while(1){
        loop(i,8)if(!(cin>>b[i])) return 0;
        int maxx=-1,maxy=-1,minx=8,miny=8;
        loop(y,8)loop(x,8){
            if(b[y][x]=='1'){
                minx=min(x,minx),miny=min(y,miny);
                maxx=max(x,maxx),maxy=max(y,maxy);
            }
        }
        int dx=maxx-minx,dy=maxy-miny;
        char ans;
        if(dx==1&&dy==1) ans='A';
        else if(dx==0) ans='B';
        else if(dy==0) ans='C';
        else if(b[miny][minx]=='0'){
            if(dx==1) ans='D';
            else ans='G';
        } else {
            if(dx==1) ans='F';
            else ans='E';
        }
        cout<<ans<<endl;
    }
}