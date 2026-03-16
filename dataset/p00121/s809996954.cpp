#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <queue>

using namespace std;

typedef pair<string, long long int> P;

int main() {
	map<string, int> st;
	queue<P> q;
	q.push(P("01234567", 0));
	st["01234567"] = 0;
	while (!q.empty()) {
		P p = q.front();
		q.pop();
		string c = p.first;
		string ra;
		if (c[0] == '0') {
			ra = c.substr(4, 1) + c.substr(1, 3) + c.substr(0, 1) + c.substr(5);
			if (st.find(ra) == st.end()) {
				st[ra] = p.second+1;
				q.push(P(ra, p.second+1));
			}
			ra = c.substr(1, 1) + c.substr(0, 1) + c.substr(2);
			if (st.find(ra) == st.end()) {
				st[ra] = p.second+1;
				q.push(P(ra, p.second+1));
			}
		} else if (c[1] == '0') {
			ra = c.substr(1, 1) + c.substr(0, 1) + c.substr(2);
			if (st.find(ra) == st.end()) {
				st[ra] = p.second+1;
				q.push(P(ra, p.second+1));
			}
			ra = c.substr(0, 1) + c.substr(2, 1) + c.substr(1, 1) + c.substr(3);
			if (st.find(ra) == st.end()) {
				st[ra] = p.second+1;
				q.push(P(ra, p.second+1));
			}
			ra = c.substr(0, 1) + c.substr(5, 1) + c.substr(2, 3) + c.substr(1, 1) + c.substr(6);
			if (st.find(ra) == st.end()) {
				st[ra] = p.second+1;
				q.push(P(ra, p.second+1));
			}
		} else if (c[2] == '0') {
			ra = c.substr(0, 1) + c.substr(2, 1) + c.substr(1, 1) + c.substr(3);
			if (st.find(ra) == st.end()) {
				st[ra] = p.second+1;
				q.push(P(ra, p.second+1));
			}
			ra = c.substr(0, 2) + c.substr(3, 1) + c.substr(2, 1) + c.substr(4);
			if (st.find(ra) == st.end()) {
				st[ra] = p.second+1;
				q.push(P(ra, p.second+1));
			}
			ra = c.substr(0, 2) + c.substr(6, 1) + c.substr(3, 3) + c.substr(2, 1) + c.substr(7);
			if (st.find(ra) == st.end()) {
				st[ra] = p.second+1;
				q.push(P(ra, p.second+1));
			}
		} else if (c[3] == '0') {
			ra = c.substr(0, 2) + c.substr(3, 1) + c.substr(2, 1) + c.substr(4);
			if (st.find(ra) == st.end()) {
				st[ra] = p.second+1;
				q.push(P(ra, p.second+1));
			}
			ra = c.substr(0, 3) + c.substr(7, 1) + c.substr(4, 3) + c.substr(3, 1);
			if (st.find(ra) == st.end()) {
				st[ra] = p.second+1;
				q.push(P(ra, p.second+1));
			}
		} else if (c[4] == '0') {
			ra = c.substr(4, 1) + c.substr(1, 3) + c.substr(0, 1) + c.substr(5, 3);
			if (st.find(ra) == st.end()) {
				st[ra] = p.second+1;
				q.push(P(ra, p.second+1));
			}
			ra = c.substr(0, 4) + c.substr(5, 1) + c.substr(4, 1) + c.substr(6);
			if (st.find(ra) == st.end()) {
				st[ra] = p.second+1;
				q.push(P(ra, p.second+1));
			}
		} else if (c[5] == '0') {
			ra = c.substr(0, 4) + c.substr(5, 1) + c.substr(4, 1) + c.substr(6, 2);
			if (st.find(ra) == st.end()) {
				st[ra] = p.second+1;
				q.push(P(ra, p.second+1));
			}
			ra = c.substr(0, 5) + c.substr(6, 1) + c.substr(5, 1) + c.substr(7);
			if (st.find(ra) == st.end()) {
				st[ra] = p.second+1;
				q.push(P(ra, p.second+1));
			}
			ra = c.substr(0, 1) + c.substr(5, 1) + c.substr(2, 3) + c.substr(1, 1) + c.substr(6, 2);
			if (st.find(ra) == st.end()) {
				st[ra] = p.second+1;
				q.push(P(ra, p.second+1));
			}
		} else if (c[6] == '0') {
			ra = c.substr(0, 5) + c.substr(6, 1) + c.substr(5, 1) + c.substr(7);
			if (st.find(ra) == st.end()) {
				st[ra] = p.second+1;
				q.push(P(ra, p.second+1));
			}
			ra = c.substr(0, 6) + c.substr(7, 1) + c.substr(6, 1);
			if (st.find(ra) == st.end()) {
				st[ra] = p.second+1;
				q.push(P(ra, p.second+1));
			}
			ra = c.substr(0, 2) + c.substr(6, 1) + c.substr(3, 3) + c.substr(2, 1) + c.substr(7);
			if (st.find(ra) == st.end()) {
				st[ra] = p.second+1;
				q.push(P(ra, p.second+1));
			}
		} else {
			ra = c.substr(0, 6) + c.substr(7, 1) + c.substr(6, 1);
			if (st.find(ra) == st.end()) {
				st[ra] = p.second+1;
				q.push(P(ra, p.second+1));
			}
			ra = c.substr(0, 3) + c.substr(7, 1) + c.substr(4, 3) + c.substr(3, 1);
			if (st.find(ra) == st.end()) {
				st[ra] = p.second+1;
				q.push(P(ra, p.second+1));
			}
		}
	}
	long long int data[8];
	while (cin >> data[0] >> data[1] >> data[2] >> data[3] >> data[4] >> data[5] >> data[6] >> data[7]) {
		long long int a = 0;
		for (int i = 0; i < 8; i++) {
			a *= 10;
			a += data[i];
		}
		stringstream ss;
		ss << a;
		string b;
		ss >> b;
		if (data[0] == 0) {
			b = '0' + b;
		}
		cout << st[b] << endl;
	}
	return 0;
}