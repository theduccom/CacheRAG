#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;

int main() {
    map<string, set<int> > index;
    string word;
    int page;
    while (cin >> word >> page) {
        index[word].insert(page);
    }
    for (map<string, set<int> >::iterator it = index.begin(); it != index.end(); it++) {
        cout << it->first << endl;
        bool insertSpace = false;
        for (set<int>::iterator sit = it->second.begin(); sit != it->second.end(); sit++) {
            if (insertSpace) {
                cout << " ";
            } else {
                insertSpace = true;
            }
            cout << *sit;
        }
        cout << endl;
    }
}