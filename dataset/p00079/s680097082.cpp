#include <stdio.h>
#include <math.h>
#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <iostream>

#define VARIABLE(x) cerr << #x << "=" << x << endl
#define BINARY(x) cerr << #x << "=" << static_cast<bitset<16> >(x) << endl;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)
#define if_range(x, y, w, h) if (0<=(int)(x) && (int)(x)<(int)(w) && 0<=(int)(y) && (int)(y)<(int)(h))

const int INF = 10000000;
int dx[4]={-1, 0, 1, 0}, dy[4]={0, -1, 0, 1};
using namespace std;
typedef pair<int, int> P;
typedef pair<double, double> Point;
/** Problem0079 : Area of Polygon **/
int main()
{
	vector<Point> points;
	double x, y; char c;
	while (cin>>x>>c>>y) {
		points.push_back(Point(x, y));
	}
	points.push_back(Point(points[0].first, points[0].second));
					
	double S=0;
	for (int i=0; i<points.size(); i++) {
		S += fabs(points[i].first*points[i+1].second - points[i+1].first*points[i].second);
	}
	printf("%.6f\n", S/2);
}