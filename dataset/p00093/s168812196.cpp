#include <iostream>
using namespace std;

bool isLeapYear(int n) {
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) {
        return true;
    }
    return false;
}

int main() {
    bool spaceFlag = false;
    while (true) {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b ==0) {
            break;
        }
        if (spaceFlag) {
            cout << endl;
        } else {
            spaceFlag = true;
        }
        bool NAFlag = true;
        for (int i = a; i <= b; i++) {
            if (isLeapYear(i)) {
                cout << i << endl;
                NAFlag = false;
            }
        }
        if (NAFlag) {
            cout << "NA" << endl;
        }
    }
}