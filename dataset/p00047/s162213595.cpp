#include<iostream>
#include<string>
using namespace std;

int main() {
	string tmp; bool a = true, b = false, c = false;
	while (cin >> tmp) {
		if ((tmp[0] == 'A'&&tmp[2] == 'B') || (tmp[0] == 'B'&&tmp[2] == 'A')) {
			bool tmp = a;
			a = b;
			b = tmp;
		}
		else if ((tmp[0] == 'A'&&tmp[2] == 'C') || (tmp[0] == 'C'&&tmp[2] == 'A')) {
			bool tmp = a;
			a = c;
			c = tmp;
		}
		else if ((tmp[0] == 'B'&&tmp[2] == 'C') || (tmp[0] == 'C'&&tmp[2] == 'B')) {
			bool tmp = b;
			b = c;
			c = tmp;
		}
	}
	if (a)cout << "A\n";
	else if (b)cout << "B\n";
	else if (c)cout << "C\n";
}
