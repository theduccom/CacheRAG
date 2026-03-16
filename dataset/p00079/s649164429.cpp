#include <iostream>
#include <iomanip>
#include <vector>
#include <utility>
#include <cmath>

using namespace std;

typedef pair<double, double> point;

double area(point A, point B, point C)
{
	double x1 = B.first  - A.first;
	double x2 = C.first  - A.first;
	double y1 = B.second - A.second;
	double y2 = C.second - A.second;
	return 0.5 * abs(x1*y2 - x2*y1);
}

int main()
{
	vector<point> coordinate;
	double x, y;
	char dummy;
	while ( cin >> x >> dummy >> y ) coordinate.push_back( make_pair(x, y) );
	
	double area_of_polygon = 0.0;
	for (vector<point>::iterator it = coordinate.begin()+1; it != coordinate.end()-1; it++) {
		area_of_polygon += area(coordinate.at(0), *it, *(it+1));
	}
	cout << fixed << setprecision(6) << area_of_polygon << endl;
	
	return 0;
}