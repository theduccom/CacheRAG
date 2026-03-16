#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>
#include <set>
#include <sstream>
#include <map>
 
using namespace std;
 
const double eps=1e-10;

int main()
{

	double _min,_max;
	cin>>_min;
	_max=_min;

	double t;
	while(cin>>t){
		_min=min(_min,t);
		_max=max(_max,t);
	}

	cout<<_max-_min<<endl;

	return 0;
}