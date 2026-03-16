#include<iostream>
#include<math.h>
using namespace std;

int checker(int i,double* x1,double* y1,double* r1,double* x2,double*y2,double* r2){
  double x=x1[i]-x2[i];
  double y=y1[i]-y2[i];
  if(r1[i]>r2[i]){
    if(sqrt(x*x+y*y)<r1[i]-r2[i])return 2;
    else if(sqrt(x*x+y*y)>=r1[i]-r2[i]&&sqrt(x*x+y*y)<=r1[i]+r2[i])return 1;
    else if(sqrt(x*x+y*y)>r1[i]+r2[i])return 0;
  }
  else {
    if(sqrt(x*x+y*y)<r2[i]-r1[i])return -2;
    else if(sqrt(x*x+y*y)>=r2[i]-r1[i]&&sqrt(x*x+y*y)<=r1[i]+r2[i])return 1;
    else if(sqrt(x*x+y*y)>r1[i]+r2[i])return 0;
  }
}
int main(){
  int x;
  cin>>x;
  int answers[x];double x1[x],y1[x],r1[x],x2[x],y2[x],r2[x];
  for(int i=0;i<x;i++){
    cin>>x1[i]>>y1[i]>>r1[i]>>x2[i]>>y2[i]>>r2[i];
    answers[i]=checker(i,x1,y1,r1,x2,y2,r2);
  }
  for(int i=0;i<x;i++){
    cout<<answers[i]<<endl;
  }
}