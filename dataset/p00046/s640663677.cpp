#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
	double 			input;
	std::vector<double> 	height;
	while (std::cin >> input) {
		height.push_back(input);
	}
	sort(height.begin(), height.end());
	std::cout << *(height.end()-1) - *(height.begin()) << std::endl;
}