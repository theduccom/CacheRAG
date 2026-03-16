// 2014/05/27 Tazoe

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int sum1 = 0, sum2 = 0;
	int cnt = 0;

	while(true){
		string s;
		cin >> s;

		if(cin.eof())
			break;

		string::size_type pos = 0;
		while(pos = s.find(",", pos), pos!=string::npos){
			s.replace(pos, 1, " ");
			pos++;
		}

//		cout << s << endl;

		istringstream is(s);

		int m, n;
		is >> m >> n;

//		cout << m << ' ' << n << endl;

		sum1 += (m*n);
		sum2 += n;
		cnt++;
	}

	cout << sum1 << endl;
	cout << (sum2*10/cnt+5)/10 << endl;

	return 0;
}