#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str[101];
	int count = 0;
	
	while ( cin >> str ) {
		int len = strlen(str);
		bool isPal = true;
		for (int i=0; i<len/2; i++) {
			if ( str[i] != str[len-i-1] ) { isPal = false; break; }
		}
		if (isPal) count++;
	}
	
	cout << count << endl;
	
	return 0;
}