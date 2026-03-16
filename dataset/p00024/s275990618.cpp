#include <bits/stdc++.h>

using namespace std;

int main() {

    int floor;
    double t, y, speed;

    while(cin >> speed) {

        t = speed / 9.8;
        y = 4.9 * t * t;

        for(floor = 1; (double)5 * floor - 5 < y; floor++);

        cout << floor << endl;

    }

}