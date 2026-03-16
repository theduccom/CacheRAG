#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int l[10];
  int v1,v2;
  int sum;
  double coll;
  int station;
  while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&v1,&v2)+1){
    sum=0;
    for(int i=0;i<10;i++){
      sum+=l[i];
    }
    //  cout<<"sum="<<sum<<endl;
    coll=(double)(v1*sum)/(double)(v1+v2);
    //  cout<<coll<<endl;
    for(int i=0;i<10;i++){
      coll-=l[i];
      if(coll<=0){cout<<i+1<<endl;break;}
    }
  }
}
    