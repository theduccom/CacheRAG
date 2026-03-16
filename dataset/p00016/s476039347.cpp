#include <iostream>
#include <cmath>
using namespace std;
int main(void){
    // Here your code !
 int r,p,f=90;
 char c;
 double x=0,y=0;
 
 while(cin>>r>>c>>p){
   if(r==0&&p==0) break;  
   
   x=x+r*cos(f*M_PI/180.0);
   y=y+r*sin(f*M_PI/180.0);
   f=f-p;
 }
 cout<<(int)x<<endl<<(int)y<<endl;
}