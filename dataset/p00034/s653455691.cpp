#include<iostream>
#include<cstdio>

using namespace std;

int main(){
  int i,sum_len,v[2];
  float closs, l[11],t[2][12]={};
  while(scanf("%f,",&l[1])!=EOF){
    sum_len=l[1];
    for(i=2;i<11;i++) {scanf("%f,",&l[i]);sum_len+=l[i];}
    scanf("%d,%d",&v[0],&v[1]);
    closs=1.0*sum_len/(v[0]+v[1]);
    double sum_time[2]={};
    for(i=1;i<10;i++){
      t[0][i]=sum_time[0]+(l[i]/v[0]);
      t[1][10-i]=sum_time[1]+l[10-i]/v[1];
      sum_time[0]+=l[i]/v[0];
      sum_time[1]+=l[10-i]/v[1];
    }
    sum_time[0]+=l[i]/v[0];
    //    sum_time[1]+=l[10-i]/v[1];
    t[0][10]=t[1][0]=sum_time[0];
    for(i=0;i<11;i++){
      //      cout<<' '<<closs<<t[0][i] << ' ' <<t[1][i]<<endl;
      if(t[0][i] >= closs && t[1][i] <= closs){cout<<i<<endl; break;}
      //if(t[0][i] == closs && t[1][i] == closs) {cout<<i-1<<endl; break;}
    }
  }
  return 0;
}
  
  
  