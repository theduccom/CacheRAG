#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int count[4] = {0}; // A, B, AB, O
	
	int no;
	char dummy;
	char buf[3];
	
	while ( cin >> no >> dummy >> buf ) {
		if ( strcmp(buf, "A") == 0 ) count[0]++;
		else if ( strcmp(buf, "B") == 0 ) count[1]++;
		else if ( strcmp(buf, "AB") == 0 ) count[2]++;
		else count[3]++;
	}
	
	for (int i=0; i<4; i++) cout << count[i] << endl;
	
	return 0;
}