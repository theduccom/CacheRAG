#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    char pos = 'A';
    string s;
    while(cin >> s) {
        if(pos == s[0])
            pos = s[2];
        else if (pos == s[2])
            pos = s[0];
    }

    cout << pos << endl;

    return 0;
}