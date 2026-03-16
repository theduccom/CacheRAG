#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <bitset>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <sstream>
#include <fstream>
#include <string.h>

#define X first
#define Y second
#define MP make_pair
#define FOR(i, n) for(int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
const int MAX = 101;

template<class T, class U>
void convert(T &t, U &u){
    stringstream ss;
    ss << t;
    ss >> u;
}

double compute(double a, double b){
	double s    = ((a*2)+(b*2))/2;
	double tmp1 = (a*a+b*b)*(a*b+a*b)*(a*b+a*b);
	double tmp2 = (s-a)*(s-b)*(s-a)*(s-b);
	double res  = sqrt(tmp1/tmp2)/4;
	return res;
}

int main(){
	int t, y, h;
	while(cin >> t >> y >> h && t|y|h){
		int n;
		cin >> n;
		FOR(i, n){
			int  cir = 0;
			bool f   = false;
			cin >> cir;
			if(compute(t, y)<cir) f = true;
			if(compute(t, h)<cir) f = true;
			if(compute(y, h)<cir) f = true;

			if(f) cout << "OK" << endl;
			else cout << "NA" << endl;
		}
	}

	return 0;
}