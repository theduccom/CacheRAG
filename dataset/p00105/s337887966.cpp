#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#define MAX 101
using namespace std;

typedef map<string,vector<int> > P;

int main()
{
    P p;
    string str[MAX];
    int i = 0;
    while (cin >> str[i]) {
        int t;
        cin >> t;
        p[str[i]].push_back(t);
        i++;
    }
    for (int k = 0; k < i; k++) {
        sort(p.at(str[k]).begin(), p.at(str[k]).end());
    }
    sort(str, str + i);
    string s = str[0];
    for (int k = 0; k < i; k++) {
        s = str[k];
        cout << s << endl << p[s][0];
        for (int j = 1; j < p[s].size(); j++) {
            cout << " " << p[s][j];
        }
        cout << endl;
        while (i > k && str[k] == s) k++;
        k--;
    }

    return 0;
}