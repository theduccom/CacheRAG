#include<iostream>
#include<cmath>
#include<cstdio>
typedef struct{
  double x,y;
}space;
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
int main(){
  space in[21];
  char m;
  rep(i,2)cin>>in[i].x>>m>>in[i].y;
  double d,e;
  int i=1;
  double sum=0;
  while(cin>>d>>m>>e){
    double a=hypot(in[0].x-in[i].x,in[i].y-in[0].y);
    double b=hypot(d-in[i].x,in[i].y-e);
    double c=hypot(in[0].x-d,e-in[0].y);
    double z=(a+b+c)/2;
    sum+=sqrt(z*(z-a)*(z-b)*(z-c));
    in[i+1].x=d;
    in[i+1].y=e;
    i++;
    //cout<<sum<<endl;
  }
  printf("%.10f\n",sum);
}