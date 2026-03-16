#include <iostream>
#include <map>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

string int_to_str(int n) {
	stringstream ss;
	string ret;

	ss << n;
	ss >> ret;

	return ret;
}


int keta(int n) {
	string str = int_to_str(n);

	return str.size();
}

int main() {
	int n;
	while (cin >> n, n) {
		bool f = false;
		map<int, ll> datas;
		vector<int> noes;
		for (int i = 0; i < n; ++i) {
			ll no, a, b; cin >> no >> a >> b;

//			if ( find( noes.begin(), noes.end(), no) == noes.end() )
//				noes.push_back(no);

			if (datas[no] < 1000000) {
				if ((datas[no] += a * b) >= 1000000) {
					cout << no << endl;
					f = true;
				}
			}
		}
/*
		for (int i = 0; i < noes.size(); ++i)
			if (datas[noes[i]] >= 1000000)
				cout << noes[i] << endl;
*/
		if (!f) cout << "NA" << endl;
	}
}