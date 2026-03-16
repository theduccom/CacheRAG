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
//#include <tuple>
#include <set>
#include <string.h>
#include <functional>

#define X first
#define Y second
#define MP make_pair
//#define MT make_tuple
#define REP(i, a, n) for(int (i) = (a); (i) < (n); ++(i))
#define FOR(i, n) REP(i, 0, n)
typedef long long ll;
using namespace std;
const int MAX = 500;

template<class T, class U>
void convert(T &t, U &u)
{
	stringstream ss;
	ss << t;
	ss >> u;
}

int main()
{
	char c;
	double a, b;
	vector< pair< double, double > > vpf;
	while( cin >> a >> c >> b ){
		if( cin.eof() ) break;
		vpf.push_back( MP( a, b ) );
	}
	
	pair< double, double > root = vpf[0];

	int pos = 2;
	double ans = 0.0;
	while( pos < vpf.size()){
		double a = sqrt( 
			(vpf[pos].X - root.X) * (vpf[pos].X - root.X) + 
			(vpf[pos].Y - root.Y) * (vpf[pos].Y - root.Y) );

		double b = sqrt( 
			(vpf[pos - 1].X - root.X) * (vpf[pos - 1].X - root.X) + 
			(vpf[pos - 1].Y - root.Y) * (vpf[pos - 1].Y - root.Y) );

		double c = sqrt( 
			(vpf[pos].X - vpf[pos - 1].X) * (vpf[pos].X - vpf[pos - 1].X) + 
			(vpf[pos].Y - vpf[pos - 1].Y) * (vpf[pos].Y - vpf[pos - 1].Y) );

		ans += sqrt( (a + b + c) * (-a + b + c) * (a + -b + c) * (a + b + -c) ) /  4.0;	//ヘロンの公式.
		++pos;
	}

	printf("%0.6f\n", ans);
	return 0;
}