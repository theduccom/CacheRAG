#include <iostream>
using namespace std;

int main()
{
    for (size_t i = 1; i <= 9; i++) {
        for (size_t j = 1; j <= 9; j++) {
            cout << i << 'x' << j << '=' << i * j << endl;
        }
    }

    return 0;
}