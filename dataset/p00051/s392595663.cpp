#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char ch[9];
        scanf("%s", ch);
        int digit[8];
        for (int j = 0; j < 8; j++) {
            digit[j] = ch[j] - '0';
        }
        for (int j = 0; j < 7; j++) {
            for (int k = 1; k < 8 - j; k++) {
                if (digit[k] < digit[k - 1]) {
                    int temp = digit[k];
                    digit[k] = digit[k - 1];
                    digit[k - 1] = temp;
                }
            }
        }
        int max = 0, min = 0;
        for (int j = 0; j < 8; j++) {
            max += digit[j] * pow(10, j);
            min += digit[7 - j] * pow(10, j);
        }
        cout << max - min << endl;
    }
}