#include <bits/stdc++.h>

const static double	de_PI	= 3.14159265358979323846;
//const static int	de_MOD	= 1000000007;
//const static int	de_MAX	= 999999999;
//const static int	de_MIN = -999999999;

inline std::vector<std::string> Split_String(const std::string &str, const char key) {

	std::vector<std::string> result;
	std::stringstream SS(str);
	std::string temp;

	while (std::getline(SS, temp, key)) {
		result.push_back(temp);
	}

	return(result);

}

int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());

	std::string str;
	double x = 0, y = 0, rad = 0;
	int distance = 0, degree = 0;

	while (std::cin >> str) {

		std::vector<std::string> v = Split_String(str, ',');
		distance = std::stoi(v[0]);
		rad = degree * de_PI / 180.0;

		x += distance * sin(rad);
		y += distance * cos(rad);

		degree += std::stoi(v[1]);
	}

	std::cout << static_cast<int>(x) << std::endl;
	std::cout << static_cast<int>(y) << std::endl;
}