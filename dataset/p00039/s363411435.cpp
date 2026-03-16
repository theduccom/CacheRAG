#include <iostream>
#include <string>
#include <vector>
using namespace std;
int num[255];

int main() {
    num['I'] = 1;
    num['V'] = 5;
    num['X'] = 10;
    num['L'] = 50;
    num['C'] = 100;
    num['D'] = 500;
    num['M'] = 1000;
    string s;
    while (cin >> s) {
        int n = num[s.back()];
        for (int i=0; i<(int)s.size()-1; ++i) {
            if (num[s[i]] < num[s[i+1]]) {
                n -= num[s[i]];
            } else {
                n += num[s[i]];
            }
        }
        cout << n << endl;
    }
    return 0;
}