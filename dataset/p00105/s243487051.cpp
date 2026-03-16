#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

int main() {
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);

    std::map<std::string, std::vector<int>> mp;
    std::string s;
    int p;
    while (std::cin >> s >> p) { mp[s].push_back(p); }

    for (auto m : mp) {
        std::cout << m.first << std::endl;
        std::sort(m.second.begin(), m.second.end());
        int c = 0;
        for (auto x : m.second) {
            if (c++ == 0)
                std::cout << x;
            else
                std::cout << ' ' << x;
        }
        std::cout << std::endl;
    }
}