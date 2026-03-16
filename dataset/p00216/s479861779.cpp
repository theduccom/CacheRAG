#include <iostream>

using namespace std;

int main(int argc, char const* argv[])
{
	int w;
	
	while( cin >> w && w != -1 ){
		int money = 0;
		for( int i = 0;i <= w;i++ ){
			if( i > 30 ) money += 160;
			else if( i > 20 ) money += 140;
			else if( i > 10 ) money += 125;
		}
		money += 1150;
		cout << 4280 - money << endl;
	}
	return 0;
}