#include <iostream>
#include <algorithm>
#include <sstream>
//#include <fstream>

using namespace std;

int stoi (string str )
{
	stringstream ss (str );
	int res;
	ss >> res;

	return res;
}

int main()
{
//	cut here before submit 
//	freopen ("testcase.diff2", "r", stdin );
	int n;

	cin >> n;

	for (int i = 0; i < n; ++i ) {
		string str = "";
		cin >> str;
		sort (str.begin(), str.end() );
		string mins = str;
		sort (str.begin(), str.end(), greater<int>() );
		string maxs = str;
		int min = stoi (mins );
		int max = stoi (maxs );
		int res = max - min;

		cout << res << endl;
	} // end loop

		
	return 0;
}