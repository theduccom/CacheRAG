#include<iostream>
#include<cmath>
using namespace std;
double x,y,dir=M_PI/2.0;
int a,b;
char c;
int main(){
  x=y=0.0;
  while(cin>>a>>c>>b&&a){
    x-=cos(dir)*(double)a;
    y+=sin(dir)*(double)a;
    dir+=b/180.0*M_PI;
    while(dir>=2.0*M_PI)dir-=2.0*M_PI;
    while(dir<0.0)dir+=2.0*M_PI;
     
  }
  cout<<(int)x<<endl<<(int)y<<endl;
  return 0;
}
