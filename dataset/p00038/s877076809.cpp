#include <iostream>
#include <string>
#include <vector>
using namespace std;

string yaku(vector<int> v) {
    int num[13] = {};
    for (int x : v) num[x-1] ++;

    int c2 = 0, c3 = 0, c4 = 0;
    bool straight = false;
    for (int i=0; i<13; ++i) {
        c4 += (num[i] == 4);
        c3 += (num[i] == 3);
        c2 += (num[i] == 2);
        if (i+4 < 13) {
            straight |= (num[i] && num[i+1] && num[i+2] && num[i+3] && num[i+4]);
        }
    }
    straight |= (num[0] && num[9] && num[10] && num[11] && num[12]);

    if (straight) return "straight";
    if (c3 & c2) return "full house";
    if (c4) return "four card";
    if (c3) return "three card";
    if (c2 == 2) return "two pair";
    if (c2) return "one pair";
    return "null";
}

int main() {
    vector<int> v(5);
    char c;
    while (cin>>v[0]>>c>>v[1]>>c>>v[2]>>c>>v[3]>>c>>v[4]) {
        cout << yaku(v) << endl;
    }
    return 0;
}