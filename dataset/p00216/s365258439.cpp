#include <iostream>
#include <vector>
#include <algorithm>
int fee4(int water) {
	if (water <= 0) return 0;
	return water * 160;
}
int fee3(int water) {
	if (water <= 0) return 0;
	return ((water > 10) ? 10 : water) * 140 + fee4(water - 10);
}
int fee2(int water) {
	if (water <= 0) return 0;
	return ((water > 10) ? 10 : water) * 125 + fee3(water - 10);
}
int fee1(int water) {
	return 1150 + fee2(water - 10);
}
int main() {
	int w;
	std::cin >> w;
	while (w != -1) {
		std::cout << 4280 - fee1(w) << std::endl;
		std::cin >> w;
	}
}
