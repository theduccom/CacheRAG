#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int nx;
  int cnt=0;
  int px[4]={1,-1,4,-4};
  string str="        ";
  map<string,int>m;
  queue<int>q;
  queue<string>sq;

  q.push(0);
  sq.push("01234567");

  while(!q.empty()){
    int siz=q.size();
    for(int nsiz=0; nsiz<siz; nsiz++){
      nx=q.front();
      q.pop();
      str=sq.front();
      sq.pop();

      if(m.count(str)==0){
	m[str]=cnt;
	for(int i=0;i<4;i++){
	  if(i<2 && nx+px[i]>=0 && nx+px[i]<8 && nx/4 == (nx+px[i])/4 ){
	    swap(str[nx],str[nx+px[i]]);
	    q.push(nx+px[i]);
	    sq.push(str);
	    swap(str[nx],str[nx+px[i]]);
	  }
	  if(i>1 && nx+px[i]>=0 && nx+px[i]<8){
	    swap(str[nx],str[nx+px[i]]);
	    q.push(nx+px[i]);
	    sq.push(str);
	    swap(str[nx],str[nx+px[i]]);
	  }
	}
      }

    }
    cnt++;
  }

  while(1){
    for(int i=0;i<8;i++){
      if(!(cin>>str[i])) return 0;
    }
    cout<<m[str]<<endl;
  }

  return(0);
}