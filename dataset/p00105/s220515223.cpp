#include <map>
#include <iostream>
#include <algorithm>
#include <vector>

int main(int argc, char const* argv[])
{
	std::map<std::string,std::vector<unsigned>> index;
	std::vector<std::string> words;
	std::string word;
	unsigned page;
	while (std::cin >> word >> page) {
		if (index[word].size()==0)
			words.push_back(word);
		index[word].push_back(page);
	}
	std::sort(words.begin(),words.end());
	for (auto& s : words) {
		std::cout << s << std::endl;
		auto& cindex = index[s];
		std::sort(cindex.begin(),cindex.end());
		bool b{false};
		for (auto& p : cindex) {
			if (b) {
				std::cout << ' ';
			}
			b = true;
			std::cout << p ;
		}
		std::cout << std::endl;
	}
	return 0;
}