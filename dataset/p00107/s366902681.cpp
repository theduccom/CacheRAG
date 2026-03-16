
#include<iostream>
#include<cmath>
using namespace std;
int main(){
double w,h,d,r;
double pi=3.141592653,s;
int n;
while(1){
cin >> w >> h >> d;
if(w+h+d==0) break;
cin >> n;
while(n--){
cin >> r;
r*=2;
double dw,dh,dd;
dw=sqrt(w*w+h*h);
dh=sqrt(h*h+d*d);
dd=sqrt(d*d+w*w);
if(dw<r||dh<r||dd<r) cout<<"OK" << endl;
else cout << "NA" << endl;
}
}
return 0;
}