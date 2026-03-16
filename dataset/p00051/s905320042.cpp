// 2015/12/14 Tazoe

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for(int i=0; i<n; i++){
		string s;
		cin >> s;

		int m[8];
		for(int j=0; j<8; j++){
			m[j] = (int)(s[j]-'0');
		}

		sort(m, m+8);

		int m_max = 0;
		int m_min = 0;

		for(int j=0; j<8; j++){
			m_max *= 10;
			m_max += m[7-j];
			m_min *= 10;
			m_min += m[j];
		}

		cout << m_max-m_min << endl;
	}

	return 0;
}