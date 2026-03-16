#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;

    while(cin >> s) {

        int len = s.size();
        int num[len + 1];
        int sum = 0;

        for(int i = 0; i < len; ++i) {
            switch(s[i]) {
                case 'I':
                    num[i] = 1;
                    break;
                case 'V':
                    num[i] = 5;
                    break;
                case 'X':
                    num[i] = 10;
                    break;
                case 'L':
                    num[i] = 50;
                    break;
                case 'C':
                    num[i] = 100;
                    break;
                case 'D':
                    num[i] = 500;
                    break;
                case 'M':
                    num[i] = 1000;
                    break;
            }
        }

        num[len] = 1;

        for(int i = len - 1; i >= 0; --i) {
            if(num[i] < num[i + 1]) {
                sum -= num[i];
            } else {
                sum += num[i];
            }
        }

        cout << sum << endl;

    }

    return 0;

}