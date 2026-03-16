#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int bloodType[4] = {};
    int i;
    char ch[3];
    while (scanf("%d,%s", &i, ch) != EOF) {
        switch (ch[0]) {
        case 'A':
            if (ch[1] == 'B')
                bloodType[2]++;
            else
                bloodType[0]++;
            break;
        case 'B':
            bloodType[1]++;
            break;
        case 'O':
            bloodType[3]++;
            break;
        }
    }
    for (int j = 0; j < 4; j++) {
        cout << bloodType[j] << endl;
    }
}