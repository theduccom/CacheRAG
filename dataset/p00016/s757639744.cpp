#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
#define PI 3.141592

double diffx(int d,int r){
  return d*cos(-1*(r*PI/180.0-PI/2));
}

double diffy(int d,int r){
  return d*sin(-1*(r*PI/180.0-PI/2));
}

int main(){
  double x=0,y=0;
  int r=0;
  int move,rr;
  while(true){
    scanf("%d,%d",&move,&rr);
    if(move==0){
      cout<<(int)x<<endl<<(int)y<<endl;  
      return 0;
    }
    x+=diffx(move,r);
    y+=diffy(move,r);
    //  cout<<diffx(move,r)<<' '<<diffy(move,r)<<endl;
    r+=rr;
    // cout<<'('<<x<<','<<y<<')'<<endl;  
  } 

}