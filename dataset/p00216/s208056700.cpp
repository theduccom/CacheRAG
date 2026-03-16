#include <iostream>
using namespace std;

int main() {
    const int lastMonth = 4280;
    while (true) {
        int w;
        cin >> w;
        if (w == -1) {
            break;
        }
        int fee = 1150;
        if (w > 10) {
            fee += (w - 10) * 125;
        }
        if (w > 20) {
            fee += (w - 20) * 15;
        }
        if (w > 30) {
            fee += (w - 30) * 20;
        }
        cout << lastMonth - fee << endl;
    }
}