#include<iostream>
#include<queue>
#include<map>
using namespace std;
typedef pair<int,int> P;
int main(){
  int n;
  char ban[8][8];
  int hantei=1;
  int sx,sy,tate,yoko;
  queue <P> zahyo;
  P p;
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<8;j++){
      for(int k=0;k<8;k++){
	cin>>ban[j][k];
      }
    }
    cin>>sx>>sy;
    p.first=sy-1;
    p.second=sx-1;
    zahyo.push(p);
    ban[sy-1][sx-1]='0';
    while(!zahyo.empty()){
      P now=zahyo.front();
      tate=now.first;
      yoko=now.second;
      for(int j=0;j<4;j++){
	for(int k=1;k<=3;k++){
	  if(j==0){
	    if(yoko+k<8 && ban[tate][yoko+k]=='1'){
	      ban[tate][yoko+k]='0';
	      p.first=tate;
	      p.second=yoko+k;
	      zahyo.push(p);
	    }
	  }
	  else if(j==1){
	    if(tate+k<8 && ban[tate+k][yoko]=='1'){
	      ban[tate+k][yoko]='0';
	      p.first=tate+k;
	      p.second=yoko;
	      zahyo.push(p);
	    }
	  }
	  else if(j==2){
	    if(yoko-k>-1 && ban[tate][yoko-k]=='1'){
	      ban[tate][yoko-k]='0';
	      p.first=tate;
	      p.second=yoko-k;
	      zahyo.push(p);
	    }
	  }
	  else if(j==3){
	    if(tate-k>-1 && ban[tate-k][yoko]=='1'){
	      ban[tate-k][yoko]='0';
	      p.first=tate-k;
	      p.second=yoko;
	      zahyo.push(p);
	    }
	  }
	}
      }
      zahyo.pop();
    }
    cout<<"Data "<<i+1<<':'<<endl;
    for(int j=0;j<8;j++){
      for(int k=0;k<8;k++){
	cout<<ban[j][k];
      }
      cout<<endl;
    }
  }
}