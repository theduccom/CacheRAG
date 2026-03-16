#include <iostream>
#include <string>

using namespace std;

// string型にfindとrepraceがある。
// これを用いて、

const string mis("Hoshino"), rep("Hoshina");

int main() {

	int N;
	cin >> N;
	cin.ignore();

	for (int i = 0; i < N; ++i) {
		string line;
		getline(cin, line);
		int pos = 0;
		while ((pos = line.find(mis, pos)) != string::npos) {
			line.replace(pos, mis.size(), rep);
		}
		cout << line << endl;
	}


	return 0;
}