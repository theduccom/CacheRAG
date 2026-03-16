#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n; char c; string abo;
    int A = 0, B = 0, AB = 0, O = 0;
    while (cin >> n >> c >> abo) {
        if (abo == "A") A ++;
        else if (abo == "B") B ++;
        else if (abo == "AB") AB ++;
        else if (abo == "O") O ++;
    }
    cout << A << endl;
    cout << B << endl;
    cout << AB << endl;
    cout << O << endl;
    return 0;
}