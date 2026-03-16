#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int price, num;
    char com;
    int income = 0, total = 0, cnt = 0;

    while (cin >> price >> com >> num) {
        income += price * num;
        total += num;
        cnt++;
    }
    cout << income << endl;
    cout << round((double)total / (double)cnt) << endl;
    return 0;
}