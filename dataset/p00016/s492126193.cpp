#include <iostream>
#include <cmath>
using namespace std;

static const double PI = 6*asin( 0.5 );
int main()
{
	double east=0.0,north=0.0,theta=90;
	double dm,dt;
	char dot;
	while(cin >> dm && cin >> dot && cin >> dt){
		if(dm==0 && dt==0)
			break;
		east += dm*cos(theta*PI/180);
		north += dm*sin(theta*PI/180);
		theta-=dt;
	}
	cout << static_cast<int>(east) << endl;
	cout << static_cast<int>(north) << endl;
	return 0;
}