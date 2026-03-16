#include <iostream>
#include <sstream>
#include <cmath>
#include <fstream>

using namespace std;

int length, angle, currentAngle;
double px, py;

void walk(void)
{
	px += length * cos (currentAngle * M_PI/180. );
	py += length * sin (currentAngle * M_PI/180. );
	currentAngle -= angle;
}

int main()
{
//	cut here before submit 
//	freopen("testcase.th", "r", stdin);
	string str = "";
	px = py = 0.;
	currentAngle = 90;

	while (getline (cin, str ) ){
		str = str.replace (str.find (','), 1, " " );
		stringstream ss(str);
		ss >> length >> angle;		
		if (length == 0 && angle == 0 ){
			break;
		} // end if
		walk();
	} // end while

	cout << (int)px << endl;
	cout << (int)py << endl;	
	
	return 0;
}