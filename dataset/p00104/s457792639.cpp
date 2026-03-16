#include <iostream>
#include <iterator>
#include <vector>

int main(int argc, char const* argv[])
{
	unsigned h{}, w{};
	while (std::cin >> h >> w, h != 0) {
		std::vector<char> tiles{};
		std::vector<bool> walked{};
		auto mapsize = h * w;
		tiles.reserve(mapsize);
		walked.assign(mapsize, false);
		for (int i = 0; i < mapsize; i++) {
			char c;
			std::cin >> c;
			tiles.push_back(c);
		}
		//walk
		unsigned current{};
		bool end{false}, loop{false};
		while ( !(end || loop) ) {
			switch (tiles.at(current)) {
				case '>':
					current += 1;
					break;
				case '<':
					current -= 1;
					break;
				case 'v':
					current += w;
					break;
				case '^':
					current -= w;
					break;
				case '.':
					end = true;
					break;
				default:
					break;
			}
			if (walked.at(current) && !end) {
				loop = true;
				break;
			}
			walked.at(current) = true;
		}
		if (loop) {
			std::cout << "LOOP" << std::endl;
		} else {
			auto x = current % w;
			auto y = current / w;
			std::cout << x << ' ' << y << std::endl;
		}
	}


	return 0;
}