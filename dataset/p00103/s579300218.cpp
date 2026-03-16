#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    vector<int> base(3,0);
    int res=0;
    int out=0;
    while(out!=3){
      string s;
      cin>>s;
      if(s=="HIT"){
	res+=base[2];
	base[2]=base[1];
	base[1]=base[0];
	base[0]=1;
      }
      if(s=="OUT"){
	out++;
      }
      if(s=="HOMERUN"){
	res+=base[0]+base[1]+base[2]+1;
	for(int i=0;i<3;i++) base[i]=0;
      }

    }
    cout<<res<<endl;

  }
  return 0;
}