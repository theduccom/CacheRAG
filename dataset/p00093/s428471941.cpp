#include <bits/stdc++.h>

using namespace std;

bool isLeap(int Y)
{
    if (Y % 400 == 0) return 1;
    if (Y % 100 == 0) return 0;
    if (Y % 4 == 0) return 1;
    return 0;
}

int main()
{
    int a, b;
    bool br = 0;
    while (cin >> a >> b, a) {
        if (br) cout << endl;
        br = 1;
        bool found = 0;        
        for (int i = a; i <= b; i++) {
            if (isLeap(i)) {
                found = 1;
                cout << i << endl;
            }
        }
        if (!found) {
            cout << "NA" << endl;
        }
    }
    
    return 0;
}