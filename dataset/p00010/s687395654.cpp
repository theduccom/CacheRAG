#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <complex>
#include <cstdio>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
typedef complex<double> P;

int n;
double x,y,xx,yy,xxx,yyy;
P a,b,c;

double cross(P a, P b) {
  return (a.real() * b.imag() - a.imag() * b.real());
}

P insect(P a1, P a2, P b1, P b2) {
  P a = a2 - a1; P b = b2 - b1;
  return a1 + a * cross(b, b1-a1) / cross(b, a);
}

int main(){
	cin>>n;
	while(n--){
		cin>>x>>y>>xx>>yy>>xxx>>yyy;
		P a=P(x,y),b=P(xx,yy),c=P(xxx,yyy);
		P ab=(a+b)*0.5,bc=(b+c)*0.5;
		P ab2=ab+(a-ab)*P(0,1),bc2=bc+(b-bc)*P(0,1);
		P p=insect(ab,ab2,bc,bc2);
		printf("%.3f %.3f %.3f\n",p.real(),p.imag(),abs(p-a));
	}
}