#include <bits/stdc++.h>
#define range(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define rep(i,n) range(i,0,n)
using namespace std;

double x[25],y[25];

inline double dist(int i,int j){
	double xx=x[j]-x[i];
	double yy=y[j]-y[i];
	return sqrt(xx*xx+yy*yy);
}

double area(double a,double b,double c){
	double s=(a+b+c)/2.0;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main(void){
	double s=0.0;
	int n=0;
	char tmp;
	while(cin >> x[n] >> tmp >> y[n]){
		if(cin.eof()) break;
		n++;
	}
	range(i,2,n){
		double a=dist(0,i-1);
		double b=dist(0,i);
		double c=dist(i-1,i);
		s+=area(a,b,c);
	}
	cout.precision(10);
	cout << fixed << s << endl;
	return 0;
}