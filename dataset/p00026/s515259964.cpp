#include <iostream>
#define rep(i,a) for(int i=0;i<(a);i++)

using namespace std;
int f[30][30]={},x,y,size;

void n(){
    int dx[13]={0,1,-1,0,0,-1,-1,1,1,0,0,2,-2},dy[13]={0,0,0,1,-1,1,-1,1,-1,2,-2,0,0};
    rep(i,4*size+1)f[y+dy[i]+10][x+dx[i]+10]+=1;
    
}

int main(){
    char z;
    while(cin>>x>>z>>y>>z>>size){
        n();
    }
    int m=0,c=0;
    rep(i,10)
        rep(j,10)
            if(f[i+10][j+10]==0)c++;
                else m=max(m,f[i+10][j+10]);
    cout<<c<<endl<<m<<endl;
    return 0;
}