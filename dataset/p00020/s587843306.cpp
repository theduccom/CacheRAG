#include <bits/stdc++.h>

//const static double	de_PI	= 3.14159265358979323846;
//const static int	de_MOD	= 1000000007;
//const static int	de_MAX	= 999999999;
//const static int	de_MIN = -999999999;

int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());

	std::string str;
	std::getline(std::cin, str);
	std::transform(str.begin(), str.end(), str.begin(), toupper);
	std::cout << str << std::endl;

}