#include<algorithm>
#include<iostream>
#include<string>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
  int i,j,k;
  int c[100][100],t[100][100],m,n,o;
  while(cin>>n>>m&&n+m){
    for(i=0;i<m;i++){
      for(j=0;j<m;j++){
	c[i][j]=10000;
	t[i][j]=10000;
      }
    }
    for(i=0;i<n;i++){
      int p,q,r,s;
      cin>>p>>q>>r>>s;
      p--;
      q--;
      c[p][q]=min(c[p][q],r);
      c[q][p]=c[p][q];
      t[p][q]=min(t[p][q],s);
      t[q][p]=t[p][q];
    }
    for(k=0;k<m;k++){
      for(i=0;i<m;i++){
	for(j=0;j<m;j++){
	  c[i][j]=min(c[i][j],c[i][k]+c[k][j]);
	  t[i][j]=min(t[i][j],t[i][k]+t[k][j]);
	}
      }
    }
    cin>>o;
    for(i=0;i<o;i++){
      int p,q,r;
      cin>>p>>q>>r;
      p--;
      q--;
      if(r)
	cout<<t[p][q]<<endl;
      else
	cout<<c[p][q]<<endl;
    }
  }
  return 0;
}