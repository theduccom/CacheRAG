#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

#define loop(i,a,b) for(int i=(a);i<int(b);i++)
#define rep(i,b) loop(i,0,b)

int d[30][30];
int main(){
    int n,m;
    while(cin>>n>>m && n){
        rep(i,30)rep(j,30)d[i][j]=1<<29;
        rep(i,30)d[i][i]=0;
        rep(i,m){
            string s;
            cin>>s;
            for(char &c:s)if(c==',')c=' ';
            stringstream ss(s);
            int a,b,d1,d2;
            ss>>a>>b>>d1>>d2;
            d[a][b]=d1; d[b][a]=d2;
        }
        int x1,x2,y1,y2;
        string s;cin>>s;
        for(char &c:s)if(c==',')c=' ';
        stringstream ss(s);
        ss>>x1>>x2>>y1>>y2;
        //printf("aa %d %d %d %d\n",x1,x2,y1,y2);
        rep(k,30)rep(i,30)rep(j,30)d[i][j]=min(d[i][j], d[i][k]+d[k][j]);
        cout << y1 - d[x1][x2] - d[x2][x1] - y2 << endl;
    }
}