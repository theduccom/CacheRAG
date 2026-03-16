#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	while (1) {
		int a,b;
		cin >> a>>b;
		if (a == 0&&b==0)break;
		vector<int>s(a);
		for (int c = 0; c < a; c++) {
			cin >> s[c];
		}
		sort(s.begin(), s.end());
		int goukei = 0;
		for (int e = 0; e < a; e++) {
			if ((e + 1) % b != 0)goukei += s[s.size() - 1 - e];
		}
		cout << goukei << endl;
	}
}