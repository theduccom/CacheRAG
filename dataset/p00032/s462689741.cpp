#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a, b, c, rect = 0, rhom = 0;
    while (scanf("%d,%d,%d", &a, &b, &c) != EOF) {
        if (a == b) {
            rhom++;
        }
        else if (a*a + b*b == c*c) {
            rect++;
        }
    }
    cout << rect << endl << rhom << endl;

    return 0;
}