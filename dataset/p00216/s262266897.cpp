#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

	int mae = 4280;
	int ryoukin;
	int water;

	while (1) {
		cin >> water;
		if (water == -1) {
			break;
		} else {
			if (water < 10) {
				ryoukin = 1150;
			} else {
				water = water - 10;
				if (water < 10) {
					ryoukin = 1150 + 125 * water;
				} else { 
					water = water - 10;
					if (water < 10) {
						ryoukin = 1150 + 125 * 10 + 140 * water;
					} else {
						water = water - 10;
						ryoukin = 1150 + 125 * 10 + 140 * 10 + 160 * water;
					}
				}
			}
		}
		cout << mae - ryoukin << endl;
	}

	return 0;
}