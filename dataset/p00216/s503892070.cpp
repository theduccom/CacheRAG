#include <iostream>
//#include <fstream>

using namespace std;

int main()
{
/*
æ 1 iK¿à	 10 m3ÜÅ	 î{¿à 1150 ~
æ 2 iK¿à	 10 m3´ß 20 m3ÜÅ	 1 m3 ½è 125 ~
æ 3 iK¿à	 20 m3´ß 30 m3ÜÅ	1 m3 ½è 140 ~
æ 4 iK¿à	 30 m3´ßª	 1 m3 ½è 160 ~
*/

//	cut here before submit 
//	freopen ("testcase.waterbill", "r", stdin );
	int n, m;

	while (cin >> n && n != -1 ){
		int res = 1150;
		
		if (n > 10 ){
			if (n <= 20){
				m = n - 10;
				res += m*125;
			}else if (n > 20 && n <= 30 ){
				res += 1250;
				m = n - 20;
				res += m*140;
			}else { //if (n > 30 )
				res += 1250;
				res += 1400;
				m = n - 30;
				res += m*160;
			} // end if
		} // end if
		cout << (4280 - res) << endl;
	} // end loop
		
	return 0;
}