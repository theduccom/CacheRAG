#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int a[10], b[10];
    a[0] = 1;
    for (int i = 1; i < 10; ++i) a[i] = 2 * a[i-1];

    int n;
    while (cin >> n) {
        for (int i = 9; i >= 0; --i) b[i] = 0;
        for (int i = 9; i >= 0; --i) if (n >= a[i]) {
            n -= a[i];
            b[i]++;
        }
        ostringstream os;
        for (int i = 0; i < 10; ++i) if (b[i])
            os << " " << a[i];
        cout << os.str().substr(1) << endl;
    }
    return 0;
}