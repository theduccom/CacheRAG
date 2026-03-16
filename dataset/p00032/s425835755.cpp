#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int side1, side2, diagonal, numOfRectangles = 0, numOfLozenges = 0;
    while (scanf("%d,%d,%d", &side1, &side2, &diagonal) != EOF) {
        if (side1 * side1 + side2 * side2 == diagonal * diagonal)
            numOfRectangles++;
        if (side1 == side2)
            numOfLozenges++;
    }
    cout << numOfRectangles << endl
         << numOfLozenges << endl;
}