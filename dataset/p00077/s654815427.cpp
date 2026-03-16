#include <iostream>
#include <string>
using namespace std;

int main()
{	
	string s;

	while (cin >> s) {
		string t;
		int p = 0, q = s.find("@"), k;

		while (q < s.size() - 2) {
			k = stoi(s.substr(q + 1, 1));

			t += s.substr(p, q - p);
			for (int i = 0; i < k; i++)
				t += s[q + 2];

			p = q + 3;
			q = s.find("@", p);
		}

		t += s.substr(p, s.size() - p);

		cout << t << endl;
	}

	return 0;
}
