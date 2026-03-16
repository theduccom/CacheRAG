#include <iostream>
#include <map>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    char ch;
    std::string type;

    std::map<std::string, int> type2cnt;
    std::map<int, int> n_cnt;
    
    while (std::cin >> n >> ch >> type) {
        if (n_cnt[n]++ == 0) {
            ++type2cnt[type];
        }
    }

    std::cout << type2cnt["A"] << std::endl;
    std::cout << type2cnt["B"] << std::endl;
    std::cout << type2cnt["AB"] << std::endl;
    std::cout << type2cnt["O"] << std::endl;

    return 0;
}