#include <iostream>
#include <algorithm>
#include <numeric>
#include <functional>

int main(){
	int n, m;
	while (std::cin >> n >> m, n || m){

		int data[1001];
		for (int i = 0; i < n; i++)std::cin >> data[i];

		std::sort(data, data + n, std::greater<int>());

		int ans = 0;
		for (int i = m - 1; i < n; i += m)ans += data[i];
		ans = std::accumulate(data, data + n, 0) - ans;
		std::cout << ans << std::endl;
	}
	return 0;
}