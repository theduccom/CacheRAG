#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int weight;
    while (cin >> weight) {
        bool spaceFlag = false;
        for (int i = 0; weight > 0; weight /= 2, i++) {
            if (weight % 2 == 1) {
                if (i > 0 && spaceFlag) {
                    cout << " ";
                }
                cout << pow(2, i);
                spaceFlag = true;
            }
        }
        cout << endl;
    }
}