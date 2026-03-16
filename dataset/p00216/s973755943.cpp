#include <iostream>
using namespace std;
int main()
{
	
	while(true){

		int w;
		int x = 0;
		cin >> w;

		if(w == -1)
			break;

		if(w >= 0 && w <= 10)
			x = 1150;
		
		else if(w > 10 && w <= 20)
			x = 1150 + (w - 10) * 125;

		else if(w > 20 && w <= 30)
			x = 1150 + (w - 20) * 140 + 10 * 125;

		else if(w > 30)
			x = 1150 + (w - 30) * 160 + 10 * 125 + 10 * 140;

		cout << 4280 - x << endl;

	}

	return 0;

}