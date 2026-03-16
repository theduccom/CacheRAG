#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
    map<string, set<int> > dict;

    string word;
    int page;

    while (cin >> word >> page) {
        dict[word].insert(page);
    }

    for (map<string, set<int> >::iterator it = dict.begin(); it != dict.end(); ++it) {
        cout << it->first << endl;
        for (set<int>::iterator it2 = it->second.begin(); it2 != it->second.end();) {
            cout << *it2;
            ++it2;
            if (it2 != it->second.end()) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}