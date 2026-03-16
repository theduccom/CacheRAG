#include <iostream>
#include <sstream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <complex>
#include <cstdio>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;

int n,m,d[21][21],s,g,pr,pi;
const int INF=9999999;
char com;
struct road{int a,b,c,d;};
road r[400];

int main() {
    cin>>n>>m;
    for(int i=0;i<m;i++)cin>>r[i].a>>com>>r[i].b>>com>>r[i].c>>com>>r[i].d;
    cin>>s>>com>>g>>com>>pr>>com>>pi;
    for(int i=0;i<441;i++)d[i/21][i%21]=INF;
    for(int i=0;i<m;i++){
	d[r[i].a][r[i].b]=r[i].c;
	d[r[i].b][r[i].a]=r[i].d;
    }
    for(int k=1;k<=n;k++)for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
    cout<<pr-pi-d[s][g]-d[g][s]<<endl;
}