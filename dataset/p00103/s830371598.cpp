#include <iostream>
#include <map>
#include <functional>

int main(int argc, char const* argv[])
{
	std::map<std::string, std::function<void(void)>> tab;
	uint8_t runner{};
	unsigned outcount{};
	unsigned point{};

	tab["HIT"] = [&](){ runner <<= 1; runner |= 1; if(runner & 0x08) ++point; };
	tab["OUT"] = [&](){ ++outcount; };
	tab["HOMERUN"] = [&](){ ++point; if(runner & 0x01) ++point; if (runner & 0x02) ++point; if (runner & 0x04) ++point; runner = 0; };
	tab[""] = [](){  };

	unsigned n;
	std::cin >> n;
	while (n--) {
		while (outcount<3) {
			std::string s{};
			std::cin >> s;
			tab[s]();
		}
		std::cout << point << std::endl;
		runner = 0;
		outcount = 0;
		point = 0;
	}
	
	return 0;
}