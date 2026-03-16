#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, p;
	string s;
	cin >> n;
	cin.get();
	while(n--) {
		getline(cin, s);
		while(p = s.find("Hoshino"), p != string::npos) {
			s.replace(p, 7, "Hoshina");
		}
		cout << s << endl;
	}
}