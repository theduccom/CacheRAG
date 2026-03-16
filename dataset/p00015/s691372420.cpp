#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string reverse(const string& str) {
	string ret;
	string::const_reverse_iterator it = str.rbegin();
	for (; it != str.rend(); it++) {
		ret.push_back(*it);
	}
	return ret;
}

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string S1;
		string S2;
		int overflow = 0;
		cin >> S1 >> S2;
		if (S1.size() > 80 || S2.size() > 80) {
			cout << "overflow";
			overflow++;
		}
		S1 = reverse(S1);
		S2 = reverse(S2);
		S1.resize(80, '0');
		S2.resize(80, '0');
		int a = 0;
		for (int i = 0; i < 80; i++) {
			S1[i] += S2[i] - '0';
			if (S1[i] > '9') {
				if (i + 1 > 79) {
					cout << "overflow";
					overflow++;
				}
				S1[i + 1] += 1;
				S1[i] -= 10;
			}
			if (S1[i] != '0')
				a = i;
		}
		S1 = reverse(S1);
		if (overflow == 0)
			for (int i = 79 - a; i < 80; i++) {
				cout << S1[i];
			}
		cout << endl;
	}
	return 0;
}