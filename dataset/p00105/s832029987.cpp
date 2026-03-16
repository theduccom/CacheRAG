#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>

using namespace std;

int find(vector <string>::iterator it, string s, int n);

int main() {
    string s;
    int n;
    map< string, priority_queue<int, vector<int>, greater<int> > > index;
    vector<string> word;

    while (1) {
        cin >> s;
        if(cin.eof()) break;
        cin >> n;

        index[s].push(n);
        if(find(word.begin(), s, word.size()) == -1) {
            word.push_back(s);
        }
    }

    sort(word.begin(), word.end());

    vector <string>::iterator it = word.begin();
    while (it != word.end()) {
        cout << *it << endl;
        while (index[*it].size() > 1) {
            cout << index[*it].top() << " ";
            index[*it].pop();
        }
        cout << index[*it].top() << endl;
        it++;
    }

    return 0;
}

int find(vector <string>::iterator it, string s, int n) {
    for (int i=0; i<n; i++, it++) {
        if (*it == s) {
            return i;
        }
    }

    return -1;
}