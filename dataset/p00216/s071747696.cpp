#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int w;
	int fare;

	while( 1 )
	{
		cin >> w;
		if(w==-1) break;
		
		fare = 1150;
		if(w > 10) w -= 10;
		else w = 0;
		
		if(w > 10) fare += 1250, w -= 10;
		else fare += w * 125, w = 0;

		if(w > 10) fare += 1400, w -= 10;
		else fare += w * 140, w = 0;

		fare += w * 160;

		cout << 4280 - fare << endl;		
	}
}