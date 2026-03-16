#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b, ab, o;
    a = b = ab = o = 0;

    int id;
    char ch;
    string blood;
    while (cin >> id >> ch >> blood) {
        if (blood == "A") {
            a++;
        } else if (blood == "B") {
            b++;
        } else if (blood == "AB") {
            ab++;
        } else if (blood == "O") {
            o++;
        } else {
            cout << "ERROR" << endl;
        }
    }

    cout << a << endl << b << endl << ab << endl << o << endl;

    return 0;
}