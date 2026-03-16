#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

int main() {

    string figure;

    while(cin >> figure) {
        int result = 0;
        char prev = '?';

        for(int i = 0; i < figure.length(); i++) {
            switch(figure[i]) {
                case 'M':
                    result += 1000;
                    if (prev == 'C')    result -= 200;
                    break;
                case 'D':
                    result += 500;
                    if (prev == 'C')    result -= 200;
                    break;
                case 'C':
                    result += 100;
                    if (prev == 'X')    result -= 20;
                    break;
                case 'L':
                    result += 50;
                    if (prev == 'X')    result -= 20;
                    break;
                case 'X':
                    result += 10;
                    if (prev == 'I')    result -= 2;
                    break;
                case 'V':
                    result += 5;
                    if (prev == 'I')    result -= 2;
                    break;
                case 'I':
                    result += 1;
                    break;
            }
            prev = figure[i];
        }

        cout << result << endl;
    }
     
    return 0;
}