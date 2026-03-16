#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

map<string,vector<int>> p;

int main()
{
    string str;
    int t;
    while (cin >> str >> t) p[str].push_back(t);
    for (auto it = p.begin(); it != p.end(); it++) {
        sort(it->second.begin(), it->second.end());
        cout << it->first  << endl << it->second[0];
        for (int j = 1; j < it->second.size(); j++)
            cout << " " << it->second[j];
        cout << endl;
    }

    return 0;
}