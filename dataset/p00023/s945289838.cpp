#include<iostream>
#include<cmath>

int main() {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		double xa, ya, ra, xb, yb, rb, dist;
		std::cin >> xa >> ya >> ra >> xb >> yb >> rb;
		dist = std::sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
		if (dist + rb < ra) std::cout << 2 << std::endl;
		else if (dist + ra < rb) std::cout << -2 << std::endl;
		else if (dist <= ra + rb) std::cout << 1 << std::endl;
		else std::cout << 0 << std::endl;
	}
	return 0;
}
