#include<iostream>
using namespace std;

int main()
{
	string s;
	string::iterator it;
	int i, n;

	while (cin>>s) {
		for (it = s.begin(); it != s.end(); it++) {
			if (*it == '@') {
				n = *(++it)++ - '0';
				for (i = 0; i < n; i++)
					cout<<*it;
			} else {
				cout<<*it;
			}
		}
		cout<<endl;
	}

	return 0;
}