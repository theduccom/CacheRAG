#include <iostream>
#include <vector>
using namespace std;

bool p[1000010];
bool ok[1000010];

void mkprime() {
	for(int i = 0; i < 1000010; i++) {
		p[i] = true;
	}
	p[0] = p[1] = false;
	for(int i = 0; i*i <= 1000010; i++) {
		if(p[i]) {
			for(int j = i*2; j < 1000010; j += i) {
				p[j] = false;
			}
		}
	}
}

int main() {
	int n, x;

	mkprime();
	while(cin >> n >> x, n || x) {
		vector<int> v;
		for(int i = 0; i < n; i++) {
			int tmp;
			cin >> tmp;
			v.push_back(tmp);
		}
		for(int i = 0; i < 1000010; i++) {
			ok[i] = false;
		}
		ok[0] = true;
		for(int i = 0; i < v.size(); i++) {
			for(int j = 0; j < x + 10; j++) {
				if(j - v[i] >= 0 && ok[j - v[i]]) {
					ok[j] = true;
				}
			}
		}

		bool flg = true;
		for(int i = x; i >= 0; i--) {
			if(ok[i] && p[i]) {
				flg = false;
				cout << i << endl;
				break;
			}
		}
		if(flg) {
			cout << "NA" << endl;
		}
	}
}