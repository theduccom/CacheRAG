#include <iostream>
#include <string>

int main() {

	int n;//dataset
	std::string st_1,st_2;

	st_2 = "Hoshino";

	std::cin >> n;
	std::cin.ignore();

	for (int i = 0; i < n; ++i)
	{
		getline(std::cin,st_1);

		std::string::size_type pos = st_1.find(st_2);

		while (pos != std::string::npos) {
			st_1.replace(pos, st_2.length(), "Hoshina");
			pos = st_1.find(st_2,pos+st_2.length());
		}

		std::cout << st_1 << std::endl;

	}

	return 0;
}