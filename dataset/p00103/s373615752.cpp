#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,outcnt=0,out=0,i=0,flag[3]={0};
  cin>>n;
  int ining[n]={0};
  while(out!=(n*3)){
    string jugde;
    cin>>jugde;
    if(jugde=="OUT"){
      outcnt++;out++;
      if(outcnt==3){
	for(int j=0;j<3;j++)
	  flag[j]=0;
	i++;
	outcnt=0;
      }
    }
    if(jugde=="HIT"){
      if(flag[2]==1)
	ining[i]++;
      if(flag[1]==1)
	flag[2]=1;
      if(flag[0]==1)
	flag[1]=1;
      flag[0]=1;
    }
    if(jugde=="HOMERUN"){
      int point=0;
      for(int j=0;j<3;j++){
	if(flag[j]==1)
	  point++;
	flag[j]=0;
      }
      ining[i]+=(point+1);
    }
  }
  for(int j=0;j<n;j++){
    cout<<ining[j]<<endl;
  }
  return 0;
}