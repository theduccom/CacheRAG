#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <queue>
#include <map>
#include <fstream>
#include <array>
#include <utility>
#include <functional>
#include <stack>
#include <math.h>

using namespace std;
typedef long long Int;
#define REP(i , x) for(Int i = 0 ; i < x ; ++i)
typedef pair<int, int> P;


int main()
{
	int a, b;

	double x = 0; 
	double y = 0;
	int radius = 90;


	while (scanf("%d,%d", &a, &b), a||b){
		y += a*sin(radius*M_PI/180);
		x += a*cos(radius*M_PI/180);
		radius -= b;
	}

	cout << (int)x << endl << (int)y << endl;                                                        
	return 0;
}