#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
double pitagoras(double x1,double y1,double x2,double y2){
  return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

main(){
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    double xa,ya,ra,xb,yb,rb;
    scanf("%lf %lf %lf %lf %lf %lf",&xa,&ya,&ra,&xb,&yb,&rb);
    double r=pitagoras(xa,ya,xb,yb);
    if(rb-ra > r && rb>ra) printf("-2\n");
    else if(ra-rb > r && ra>rb) printf("2\n");
    else if(ra+rb >= r) printf("1\n");
    else printf("0\n");
  }
}