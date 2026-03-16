#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main(void) {
    int id;
    string format;
    map<string, int> table;
    table.insert(make_pair("A", 0));
    table.insert(make_pair("B", 0));
    table.insert(make_pair("AB", 0));
    table.insert(make_pair("O", 0));
    
    while(scanf("%d,", &id) != EOF) {
        cin >> format;table[format]++;
    }
    string ary[4] = {"A", "B", "AB", "O"};
    for(int r = 0; r < 4; r++) {
        cout << table[ary[r]] << endl;
    }
    return(0);
}