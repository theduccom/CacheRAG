#include <iostream>
#include <string>
#include <map>
#include <cstdio>

using namespace std;

int main() {
    int id;
    string type;
    map<string, int> mp;
    while (scanf("%d,", &id) != EOF) {
        cin >> type;
        mp[type]++;
    }
    cout << mp["A"] << endl;
    cout << mp["B"] << endl;
    cout << mp["AB"] << endl;
    cout << mp["O"] << endl;

    return 0;
}