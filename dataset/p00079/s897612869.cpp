#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

double ans=0.0,x[1000],y[1000];
int id;
char ch;

double S3(double ,double,double,double,double,double);
double f(double,double,double,double);
int main(){
  id=0;
  while(cin>>x[id]>>ch>>y[id]){
    if(id>=2){
      ans+=S3(x[0],y[0],x[id-1],y[id-1],x[id],y[id]);
    }
    id++;   
  }
  //  cout<<ans<<endl;
  printf("%.6f\n",ans);
  return 0;
  
}


double S3(double x1,double y1,double x2,double y2,double x3,double y3){
  double a=f(x1,y1,x2,y2),b=f(x2,y2,x3,y3),c=f(x3,y3,x1,y1);
  double z=(a+b+c)/2.0;
  return sqrt(z*(z-a)*(z-b)*(z-c));
}


double f(double x1,double y1,double x2,double y2){
  return sqrt(pow(x1-x2,2.0)+pow(y1-y2,2.0));

}