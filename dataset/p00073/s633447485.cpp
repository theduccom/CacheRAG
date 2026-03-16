

/*
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main(){

double x,h,W=0,X=0,S=0;
while(1){
scanf("%lf %lf",&x,&h);
if(x==0&&h==0)break;
X=0.5*x;
W=sqrt(X*X+h*h);
S=x*x+2*W*x;
cout<<S<<endl;

}
return 0;
}

*/

#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main(){

double x,h,W,S=0,R=0,PI;
PI=3.141592;
while(1){
scanf("%lf %lf",&x,&h);
if(x==0&&h==0)break;
R=atan2( h, 0.5*x );
W=0.5*x/cos(R);
//W=sqrt(x*x+h*h);
S=x*x+2*W*x;
printf("%lf\n",S);
//cout<<S<<endl;
//cout<<W<<endl;

}
return 0;
}