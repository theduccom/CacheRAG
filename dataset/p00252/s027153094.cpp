#include <iostream>

using namespace std;

int main()
{
    char b1, b2, b3;

    cin >> b1 >> b2 >> b3;

    if ((b1 == '0' || b2 == '0') && (b3 == '0')) {
        cout << "Close" << endl;
    } else {
        cout << "Open" << endl;
    }

    return 0;
}

