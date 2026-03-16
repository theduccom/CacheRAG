#include<bits/stdc++.h>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;
int dx[]={1,2,3,-1,-2,-3,0,0,0,0,0,0};
int dy[]={0,0,0,0,0,0,1,2,3,-1,-2,-3};
int main(){
  int n;
  cin>>n;
  r(pp,n){
    string s[8];
    r(i,8)cin>>s[i];
    int x1,y1;
    cin>>x1>>y1;x1--;y1--;
    int a[8][8]={};
    a[y1][x1]++;
    r(o,10)r(i,8)r(j,8){
      if(a[i][j]&&s[i][j]=='1')
        r(k,12){
          int x=j+dx[k],y=i+dy[k];
          if(x>=0&&y>=0&&y<8&&x<8)
            a[y][x]=1;
        }
    }
    
    r(i,8)r(j,8)if(a[i][j])s[i][j]='0';
    cout<<"Data "<<pp+1<<':'<<endl;
    r(i,8)cout<<s[i]<<endl;
  }
}