#include <iostream>
#include <string>

using namespace std;

int main(){
	int n = 0; cin >> n;
	for (int i = 0; i < n; ++i) {
		int outcount = 0, point = 0, runner = 0;
		string input;
		while ( outcount < 3 ) {
			cin >> input;
			if (input == "HIT") {
				if (runner >= 3)
					++point;
				else
					++runner;
			} else if (input == "HOMERUN") {
				point += runner + 1;
				runner = 0;
			} else {
				++outcount;
			}
		}
		cout << point << endl;
	}
}