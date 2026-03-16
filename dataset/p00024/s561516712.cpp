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
	double v;
	while(cin>>v){
		unsigned long long l=1,r=1e16,h;

		for(int i=0;i<1000;i++){

//			cout<<l<<" "<<r<<endl;

			h=(l+r)/2;
			double vv=2.0*9.8*(5*h-5);

			if(v*v>vv) l=h;
			else if(v*v<vv) r=h;
		}

		if( v*v<=2.0*9.8*(5*l-5) ) cout<<l<<endl;
		else cout<<r<<endl;

	}

	return 0;
}