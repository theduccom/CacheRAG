#include <bits/stdc++.h>
using namespace std;

using db = double;
using ll = long long;
using vi = vector <int>;
#define op operator
#define pb push_back

int a[5];
int c[14];

int main() {
	ios :: sync_with_stdio(0);

	while(cin >> a[0]) {
		char t;
		for(int i = 1; i < 5; i ++)
			cin >> t >> a[i];
		fill(c, c + 14, 0);
		for(int i = 0; i < 5; i ++)
			c[a[i]] ++;

		auto f = [&](int i) {
			return count(c, c + 14, i);
		};
		auto straight = [&]() {
			bool r = 0;
			for(int i = 1; i <= 10; i ++) {
				bool t = 1;
				for(int j = i; j < i + 5; j ++)
					if(!c[(j - 1) % 13 + 1])
						t = 0;
				r |= t;
			}
			return r;
		};

		if(f(4))
			cout << "four card\n";
		else if(f(3) && f(2))
			cout << "full house\n";
		else if(straight())
			cout << "straight\n";
		else if(f(3))
			cout << "three card\n";
		else if(f(2) == 2)
			cout << "two pair\n";
		else if(f(2))
			cout << "one pair\n";
		else
			cout << "null\n";
	}

	return 0;
}