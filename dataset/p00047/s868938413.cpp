#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    bool n[3];
    n[0] = true;
    n[1] = n[2] = false;
    char a,b,c;
    while (cin >> a >> c >> b) {
        swap(n[a - 'A'], n[b - 'A']);
    }
    if (n[0]) cout << "A" << endl;
    if (n[1]) cout << "B" << endl;
    if (n[2]) cout << "C" << endl;
    return 0;
}