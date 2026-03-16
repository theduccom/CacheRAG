#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
  int n;
  cin >>n;
  while(n--){
    double p[3][2];
    for(int i=0; i<3; i++)
      for(int j=0; j<2; j++)
	cin >>p[i][j];
    for(int i=1; i<3; i++)
      for(int j=0; j<2; j++)
	p[i][j]-=p[0][j];
    double m[2][2],det,im[2][2],x[2],s[2];
    for(int i=0; i<2; i++)
      for(int j=0; j<2; j++)
	m[i][j] = 2*p[i+1][j];
    for(int  i=0; i<2; i++)
      x[i] = p[i+1][0]*p[i+1][0]+p[i+1][1]*p[i+1][1];
    det = m[0][0]*m[1][1]-m[0][1]*m[1][0];
    im[0][0] = m[1][1]/det;
    im[0][1] = -m[0][1]/det;
    im[1][0] = -m[1][0]/det;
    im[1][1] = m[0][0]/det;
    for(int i=0; i<2; i++)
      s[i] = im[i][0]*x[0]+im[i][1]*x[1];
    printf("%.3lf %.3lf %.3lf\n",s[0]+p[0][0],s[1]+p[0][1],sqrt(s[0]*s[0]+s[1]*s[1]));
  }
  return 0;
}