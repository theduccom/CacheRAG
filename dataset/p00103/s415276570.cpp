#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define reset_i out = 0; point = 0;
#define reset_p for(int j = 0; j < 3; j++) player[j] = false;
#define player_sum count(player.begin(), player.end(), true)

int main() {
	int n, out, point; cin >> n; reset_i
	vector<bool> player(3); reset_p string temp;
	for (int i = 0; i < n;) {
		cin >> temp;
		if (temp == "HIT") {
			if (player[2] == true) { point++; player[2] = false; }
			if (player[1] == true) { player[2] = true; player[1] = false; }
			if (player[0] == true) { player[1] = true; player[0] = false; }
			player[0] = true;
		}
		if (temp == "OUT") out++;
		if (temp == "HOMERUN") { point += player_sum + 1; reset_p }
		if (out == 3) { cout << point << endl; i++; reset_i reset_p }
	}
	return 0;
}
