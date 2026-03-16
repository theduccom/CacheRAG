#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int a[5];
    char c;
    while (cin >> a[0] >> c >> a[1] >> c >> a[2] >> c >> a[3] >> c >> a[4]) {
        int b[14] = {};
        for (int i = 0; i < 5; ++i) ++b[a[i]];
        sort(a, a+5);
        sort(b, b+14, greater<int>());


        if (b[0] == 4 || b[0] == 5)
            cout << "four card" << endl;
        else if (b[0] == 3 && b[1] == 2)
            cout << "full house" << endl;
        else if (((a[0]+1 == a[1]) && (a[1]+1==a[2]) && (a[2]+1==a[3]) && (a[3]+1==a[4])) ||
                 (a[0] == 1 && a[1]==10 && a[2]==11 && a[3]==12 && a[4]==13))
            cout << "straight" << endl;
        else if (b[0] == 3)
            cout << "three card" << endl;
        else if (b[0] == 2 && b[1] == 2)
            cout << "two pair" << endl;
        else if (b[0] == 2 )
            cout << "one pair" << endl;
        else
            cout << "null" << endl;
    }
    return 0;
}

