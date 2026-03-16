#include<bits/stdc++.h>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
  long ver,hor,height;
  while(1){
    cin>>ver>>hor>>height;
    if(!ver && !hor && !height)break;
    int n;
    int dis[3];
    dis[0]=sqrt(ver*ver+hor*hor);
    dis[1]=sqrt(hor*hor+height*height);
    dis[2]=sqrt(height*height+ver*ver);
    cin>>n;
    rep(i,n){
      int r;
      cin>>r;
      int cnt=0;
      rep(i,3){
	if(2*r>dis[i])cnt++;
      }
      if(cnt==0)cout<<"NA"<<endl;
      else cout<<"OK"<<endl;
    }
  }
  return 0;
}