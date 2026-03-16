#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string a;
	getline(cin, a);
	for (int i = 0; i < a.size(); i++) {
		a[i] = toupper(a[i]);
	}
	cout << a << endl;;
}
