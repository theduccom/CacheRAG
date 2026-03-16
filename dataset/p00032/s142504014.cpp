#include <iostream>
using namespace std;

int main(void) {
    int a, b, c;
    char d;
    int sum1 = 0, sum2 = 0;
    while (cin >> a >> d >> b >> d >> c) {
        if (a*a+b*b==c*c) ++sum1;
        if (a==b) ++sum2;
    }
    cout << sum1 << endl << sum2 << endl;
    return 0;
}

