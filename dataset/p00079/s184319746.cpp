#include <stdio.h>
#include <iostream>
#include <vector>
#include <list>
#include <cmath>
#include <fstream>
#include <algorithm>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <complex>
#include <iterator>
#include <cstdlib>
#include <sstream>

using namespace std;

#define EPS (1e-10)
#define EQ(a,b) (abs((a) - (b)) < EPS)
#define EQV(a,b) (EQ((a).real(),(b).real()) && EQ((a).imag(),(b).imag()))

typedef complex<double> P;
typedef long long ll;

const int MAX_SIZE = 10000;


int main(){

	double x,y;
	double cx,cy;
	cx=cy=0;
	vector<P> ps;
	char ch;
	while(cin>>x>>ch>>y){
		ps.push_back(P(x,y));
		cx+=x;
		cy+=y;
	}
	cx/=ps.size(),cy/=ps.size();
	double S=0;
	for(int i = 0; i < ps.size(); i++){
		P A(cx,cy);
		P B=ps[i];
		P C=ps[(i+1)%((int)ps.size())];
		double a = abs(A-B);
		double b = abs(A-C);
		double c = abs(B-C);
		double z = (a+b+c)/2;
		S += sqrt(z*(z-a)*(z-b)*(z-c));
	}
	printf("%.8f\n",S);

	return 0;
}