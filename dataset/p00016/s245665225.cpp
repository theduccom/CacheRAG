#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <map>
#include <numeric>
using namespace std;

#define FOR(i,a,b) for(long long int i=(a);i<(b);i++)
#define REP(i,n) for(long long int i=0;i<(n);i++)
#define ALL(s) (s).begin(),(s).end()

#define PI 3.14159265358479

typedef long long ll;
typedef vector<long long int> vi;
typedef vector<long long int>::iterator vit;

int main(){
	double l, a, b, x = 0, y = 0, c = 0;
	while (scanf("%lf,%lf", &l, &a)){
		if (l == 0 && a == 0)break;
		if (c == 0){
			y += l;
		}
		else{
			x += l*sin(b / 180.0*PI);
			y += l*cos(b / 180.0*PI);
		}
		b += a;
		c++;
	}
	cout << (int)x << "\n" << (int)y << "\n";
}