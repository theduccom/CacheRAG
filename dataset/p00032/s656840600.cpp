#include <bits/stdc++.h>

using namespace std;

int main() {

    int e[3];
    int square = 0, rhombus = 0;

    char split;

    while(cin >> e[0] >> split >> e[1] >> split >> e[2]) {

        if(e[0] * e[0] + e[1] * e[1] == e[2] * e[2]) {
            ++square;
        } else if(e[0] == e[1]) {
            ++rhombus;
        }

    }

    cout << square << endl << rhombus << endl;

}