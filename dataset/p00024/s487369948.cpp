#include <iostream>
using namespace std;

int main()
{
	double v;
	int floor;
	while(cin >> v){
		floor = static_cast<int>(v*v/98)+1;
		if(static_cast<double>(static_cast<int>(v*v/98)) != v*v/98)
			floor++;
		cout << floor << endl;
	}
	return 0;
}