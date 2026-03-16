#include<bits/stdc++.h>
#define r(i,n) for(int i=0;i<n;i++)
#define mk make_pair
#define f first
#define s second
using namespace std;
int t[8][8][8][8][8][8][8][8];
int dx[]={1,-1,4,-4};
void plu(string x,int p){
  t[x[0]][x[1]][x[2]][x[3]][x[4]][x[5]][x[6]][x[7]]=p;
}
bool ret(string x){
  return t[x[0]][x[1]][x[2]][x[3]][x[4]][x[5]][x[6]][x[7]];
}
int get(int x[8]){
  return t[x[0]][x[1]][x[2]][x[3]][x[4]][x[5]][x[6]][x[7]];
}
int main(){
  string v,a,x;
  r(i,8)v+=i;
  queue<pair<string,int> >q;
  plu(v,0);
  q.push(mk(v,0));
  while(!q.empty()){
    pair<string,int>p=q.front();q.pop();
    x=p.f;
    plu(p.f,p.s);
    r(i,8)if(!x[i])r(j,4){
      if(j==0&&i==3)continue;
      if(j==1&&i==4)continue;
      int y=i+dx[j];
      if(y>=0&&y<8){
      a=x;
      swap(a[i],a[y]);
      if(!ret(a)){
        q.push(mk(a,p.s+1));
        plu(a,p.s+1);
      }
      }
    }
  }
  int qq[8];
  while(cin>>qq[0]){
    r(i,7)cin>>qq[i+1];
    cout<<get(qq)<<endl;
  }
}