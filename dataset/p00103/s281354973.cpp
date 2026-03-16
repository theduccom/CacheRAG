#include <string>
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		int out_count = 0;
		int runner_count = 0;
		int score = 0;
		while (true) {
			string event;
			cin >> event;
			if (event == "HIT") {
				if (runner_count != 3) {
					++runner_count;
				}
				else {
					++score;
				}
			}
			else if (event == "HOMERUN") {
				score += runner_count + 1;
				runner_count = 0;
			}
			else { // event == "OUT"
				if (++out_count == 3) {
					cout << score << endl;
					break;
				}
			}
		}
	}
}