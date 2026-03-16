#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string hissan(string a, string b) {
    if (a.size() < b.size()) a.swap(b);
    int bi = b.size() - 1;
    int c = 0;
    string ans;

    for (int i = a.size() - 1; i >= 0; i--) {
        int _a = a[i] - '0';
        int _b = (bi >= 0) ? b[bi--] - '0' : 0;
        int x = _a + _b + c;

        if (x < 10) {
            c = 0;
        }
        else {
            x -= 10;
            c = 1;
        }
        ans.insert(0, to_string(x));
    }

    if (c) ans.insert(0, "1");

    return ans;
}

int main()
{
    int n;
    string a, b;

    cin >> n;
    while(n--) {
        cin >> a;
        cin >> b;
        string x = hissan(a, b);
        cout << ((x.size() > 80) ? "overflow" : x) << endl;
    }
    return 0;
}

