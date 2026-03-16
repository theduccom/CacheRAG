#include <iostream>
#include <cstring>
//#include <fstream>

using namespace std;

int total[10];

int main()
{
//	cut here before submit 
//	freopen ("testcase.iceshop", "r", stdin );
	string str = "";
	int n;

	while (cin >> n && n ){
		memset (total, 0, sizeof (total ) );

		int i,j;
		for (i = 0; i < n; ++i ){
			int ice;
			cin >> ice;
			++total[ice];
		} // end for

		for (i = 0; i < 10; ++i ){
			if (total[i] == 0 ){		
				cout << '-' << endl;
			}else{
				for (j = 0; j < total[i]; ++j ){
					cout << '*';
				} // end for
				cout << endl;
			} // end if
		} // end for
	} // end loop
		
	return 0;
}