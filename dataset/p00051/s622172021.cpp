#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int ll;

ll high(vector<int> table) {
    sort(table.begin(), table.end(), greater<int>());
    ll ret = 0;
    ll multi = 10000000;
    for(int r = 0; r < table.size(); r++) {
        ret += table[r] * multi; multi /= 10;
    }
    return(ret);
}

ll low(vector<int> table) {
    sort(table.begin(), table.end());
    ll ret = 0;
    ll multi = 10000000;
    for(int r = 0; r < table.size(); r++) {
        ret += table[r] * multi; multi /= 10;
    }
    return(ret);
}

int main(void) {
    int num; cin >> num;
    string input;
    for(int r = 0; r < num; r++) {
        cin >> input;
        vector<int> table;
        for(int c = 0; c < input.length(); c++) table.push_back(input[c] - '0');
        
        cout << (high(table) - low(table)) << endl;
    }
    return(0);
}