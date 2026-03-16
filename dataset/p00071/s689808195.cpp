#include<iostream>
#include<cstring>
#include<algorithm>
#include<string>
#include<vector>
#include<cstdio>
#include<cmath>
#define pb(in,tmp) in.push_back(tmp)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,b) loop(i,0,b)
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
using namespace std;

void bom(int x,int y,vector<string>&in){
in[x][y]='0';
loop(i,-3,4)
loop(j,-3,4){
if(i&&j)continue;
if(x+i>=0&&x+i<8&&y+j>=0&&y+j<8&&in[x+i][y+j]=='1')bom(x+i,y+j,in);
}
}

int main(){
int n;
cin>>n;
rep(i,n){
vector<string> in(8);
rep(j,8)cin>>in[j];
int x,y;
cin>>x>>y;
if(in[y-1][x-1]=='1')bom(y-1,x-1,in);
cout<<"Data "<<i+1<<':'<<endl;
rep(j,8)cout<<in[j]<<endl;
}
}