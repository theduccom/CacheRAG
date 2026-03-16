#include <iostream>
#include <string>
#include <map>
#include <cstdint>

int main()
{
	typedef std::map<std::string, char> FigureToIdent;
	FigureToIdent figure_to_idnt;
	figure_to_idnt.insert(std::make_pair("1100000011", 'A'));
	figure_to_idnt.insert(std::make_pair("1000000010000000100000001", 'B'));
	figure_to_idnt.insert(std::make_pair("1111", 'C'));
	figure_to_idnt.insert(std::make_pair("1000000110000001", 'D'));
	figure_to_idnt.insert(std::make_pair("11000000011", 'E'));
	figure_to_idnt.insert(std::make_pair("100000001100000001", 'F'));
	figure_to_idnt.insert(std::make_pair("110000011", 'G'));

	std::string input;
	while (getline(std::cin, input)) {
		if (input == "") {
			getline(std::cin, input);
		}
		for (std::uint16_t i = 1; i < 8; ++i) {
			std::string temp;
			getline(std::cin, temp);
			input += temp;
		}

		for (auto const& value : figure_to_idnt) {
			if (input.find(value.first) != std::string::npos) {
				std::cout << value.second << std::endl;
				break;
			}
		}
	}

	return 0;
}