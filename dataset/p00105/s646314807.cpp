
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>

typedef std::map<std::string, std::vector<int> > index_t;
typedef std::pair<std::string, std::vector<int> > info_t;

index_t index;

std::string word;
int page_num;
bool get_input()
{
	return (std::cin >> word >> page_num);
}

int main()
{
	index_t::iterator word_itr;
	while (get_input()) {
		word_itr = index.find(word);
		if (word_itr == index.end()) {
			std::vector<int> page_nums;
			page_nums.push_back(page_num);
			info_t info(word, page_nums);
			index.insert(info);
		} else {
			word_itr->second.push_back(page_num);
		}
	}
	for (index_t::iterator i = index.begin(); i != index.end(); i++) {
		std::cout << i->first << std::endl;
		std::sort(i->second.begin(), i->second.end());
		for (std::vector<int>::iterator j = i->second.begin(); j != i->second.end(); j++) {
			if (j != i->second.end() -1) {
				std::cout << *j << " ";
			} else {
				std::cout << *j;
			}
		}
		std::cout << std::endl;
	}
	return 0;
}