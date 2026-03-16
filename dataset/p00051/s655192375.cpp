#include<iostream>
#include<array>
#include<algorithm>
int main()
{
	std::array<int, 8>num_sorted;
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		std::cin >> num;
		for (int j = 0; j < 8; j++)
		{
			num_sorted[j] = num % 10;
			num /= 10;
		}
		std::sort(num_sorted.begin(), num_sorted.end());
		std::cout <<
			num_sorted[7] * 9999999 +
			num_sorted[6] * 999990 +
			num_sorted[5] * 99900 +
			num_sorted[4] * 9000 -
			num_sorted[3] * 9000 -
			num_sorted[2] * 99900 -
			num_sorted[1] * 999990 -
			num_sorted[0] * 9999999
			<< std::endl;
	}
	return 0;
}
