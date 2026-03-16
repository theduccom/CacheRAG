#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

int main() {
	while (1) {
		map<int, int>s;
		int a;
		cin >> a;
		if (a == 0)break;
		for (int b = 0; b < a; b++) {
			int  c, d, e;
			cin >> c >> d >> e;
			s.insert(pair<int, int>(d + e, c));
		}
		auto m = s.end();
		m--;
		cout << m->second <<" "<< m->first << endl;
   }
}