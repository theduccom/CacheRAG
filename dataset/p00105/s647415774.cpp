#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
    map<string, vector<int>> list;
    string word;
    int page;
    while (cin >> word >> page) {
        if (list.count(word)) {
            list[word].push_back(page);
        } else {
            list[word] = vector<int>(1, page);
        }
    }
    for (auto li : list) {
        cout << li.first << endl;
        sort(li.second.begin(), li.second.end());
        for (int i=0; i<(int)li.second.size(); ++i) {
            cout << (i == 0 ? "" : " ") << li.second[i];
        }
        cout << endl;
    }
    return 0;
}