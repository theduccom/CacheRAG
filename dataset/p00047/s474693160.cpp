#include <iostream>

using namespace std;

int main()
{
	bool exists_ball[3] = {true, false, false};
	char cup1, cup2;
	char dummy;
	
	while ( cin >> cup1 >> dummy >> cup2 ) {
		int iCup1 = cup1 - 'A';
		int iCup2 = cup2 - 'A';
		if (exists_ball[iCup1] != exists_ball[iCup2]) {
			exists_ball[iCup1] = !exists_ball[iCup1];
			exists_ball[iCup2] = !exists_ball[iCup2];
		}
	}
	
	for (int i=0; i<3; i++) {
		if (exists_ball[i]) cout << static_cast<char>(i+'A') << endl;
	}
	
	return 0;
}