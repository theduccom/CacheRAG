#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    char x1, x2, ball = 'A';
    while ((x1 = getchar()) != EOF) {
        getchar();
        x2 = getchar();
        getchar();
        if (ball == x1) {
            ball = x2;
        } else if (ball == x2) {
            ball = x1;
        }
    }
    cout << ball << endl;
}