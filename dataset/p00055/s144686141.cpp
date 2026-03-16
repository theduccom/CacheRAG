#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>
#include <set>
#include <iostream>
#include <map>
#include <functional>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	double a;
	while(scanf("%lf", &a) != EOF){
		double sum = 0.0;
		rep(i, 10){
			sum += a;
			a *= (i%2 ? 1.0/3.0 : 2.0);
		}
		printf("%.8f\n", sum);
	}

	return 0;
}