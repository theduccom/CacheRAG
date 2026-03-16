#include <bits/stdc++.h>
#define PI 3.14159265359
using namespace std;

int main() {
	char ch;
	vector<int> v(5);
	int& a = v.at(0),
		& b = v.at(1),
		& c = v.at(2),
		& d = v.at(3),
		& e = v.at(4);

	while (cin >> a) {
		cin >> ch >> b >> ch >> c >> ch >> d >> ch >> e;

		/*
		one pair  （2 枚の同じ数字のカードが1 組ある）
		two pair  （2 枚の同じ数字のカードが2 組ある）
		three card（3 枚の同じ数字のカードが1 組ある）
		full house（3 枚の同じ数字のカードが1 組と、残りの2 枚が同じ数字のカード）
		four card （4 枚の同じ数字のカードが1 組ある）
		straight  （5 枚のカードの数字が連続している）
		null
		*/

		sort(v.begin(), v.end());
		//cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << endl;

		string t = "null";
		vector<int> v2(4);
		v2.at(0) = b - a;
		v2.at(1) = c - b;
		v2.at(2) = d - c;
		v2.at(3) = e - d;

		int cnt = count(v2.begin(), v2.end(), 0);
		if (cnt == 1) {
			t = "one pair";
		}
		else if (cnt == 2) {
			if (v2.at(0) == 0 && v2.at(1) == 0) {
				t = "three card";
			}
			else if (v2.at(1) == 0 && v2.at(2) == 0) {
				t = "three card";
			}
			else if (v2.at(2) == 0 && v2.at(3) == 0) {
				t = "three card";
			}
			else {
				t = "two pair";
			}
		}
		else if (cnt == 3) {
			if (v2.at(1)!=0||v2.at(2)!=0){
				t = "full house";
			}
			else {
				t = "four card";
			}
		}
		else {
			if (v.at(1) == v.at(0) + 1
				&& v.at(2) == v.at(1) + 1
				&& v.at(3) == v.at(2) + 1) {
				t = "straight";
			}
		}

		if (a == 1 && b == 10 && c == 11 && d == 12 && e == 13) t = "straight";

		cout << t << endl;
	}
}
