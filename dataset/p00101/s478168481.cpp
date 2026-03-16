#include <string>
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();
	while (n--) {
		string line,word;
		getline(cin,line);
		string::size_type hoshino_pos;
		while ((hoshino_pos = line.find("Hoshino")) != string::npos) {
			line.replace(hoshino_pos + 6,1,"a");
		}
		cout << line << endl;
	}
}