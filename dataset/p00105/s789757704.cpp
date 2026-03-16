#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::map<std::string, std::vector<int> > BookIndex;
    std::string word;
    int page;

    while (std::cin >> word >> page) {
        if (BookIndex.count(word)) {
            BookIndex[word].push_back(page);
        } else {
            BookIndex[word] = std::vector<int>(1, page);
        }
    }

    for (std::map<std::string, std::vector<int> >::iterator bookindex = BookIndex.begin(); bookindex != BookIndex.end(); ++bookindex) {
        std::cout << (*bookindex).first << std::endl;
        std::sort((*bookindex).second.begin(), (*bookindex).second.end());
        
        for (int i = 0; i < static_cast<int>((*bookindex).second.size()); ++i) {
            std::cout << (i == 0 ? "" : " " ) <<(* bookindex).second[i];
        }
        
        std::cout << std::endl;
        
    }

    return 0;
}

    
        