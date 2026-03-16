#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cfloat>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <numeric>
#include <iterator>

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int,int> PII;
typedef vector<PII> VPII;
typedef stringstream SS;
template < typename T > inline T fromString( const string &s ){ T res; istringstream iss( s ); iss >> res; return res; };
template < typename T > inline string toString( const T &a ){ ostringstream oss; oss << a; return oss.str(); };

#define REP( i, m, n ) for ( int i = (int)( m ); i < (int)( n ); ++i )
#define FOR( v, c ) for ( auto &v : c )
#define EACH( it, c ) for ( auto it = c.begin(); it != c.end(); ++it )
#define ALL( c ) (c).begin(), (c).end()
#define DRANGE( c, p ) (c).begin(), (c).begin() + p, (c).end()

#define PB( n ) push_back( n )
#define MP( a, b ) make_pair( ( a ), ( b ) )
#define EXIST( c, e ) ( (c).find( e ) != (c).end() )

#define fst first
#define snd second

#define DUMP( x ) cerr << #x << " = " << ( x ) << endl

#include <complex>
typedef complex<double> Point;
const double EPS = 1e-8;
const double PI = acos( -1 );

// 入力ストリームから実数二つをとって Point へ
istream& operator >> ( istream &s, Point &a )
{
	double r, i;
	s >> r >> i;
	a = Point( r, i );
	return s;
}

// 多角形 ps の面積
double polygon_area( vector<Point> ps )
{
	const int N = ps.size();
	ps.push_back( ps[0] );

	double res = 0;
	for ( int i = 0; i < N; ++i )
	{
		res += ps[i].real() * ps[ i + 1 ].imag() - ps[ i + 1 ].real() * ps[i].imag();
	}
	return abs( res / 2 );
}

int main()
{
	cin.tie( 0 );
	ios::sync_with_stdio( false );

	vector< Point > ps;
	for ( string s; cin >> s; )
	{
		replace( ALL( s ), ',', ' ' );
		SS iss( s );
		Point p;
		iss >> p;
		ps.PB( p );
	}

	cout << setprecision( 8 ) << fixed << polygon_area( ps ) << endl;

	return 0;
}