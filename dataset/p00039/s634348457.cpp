#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    string input;
    map<char, int> alpha;

    alpha['A'] = 0;
    alpha['I'] = 1;
    alpha['V'] = 5;
    alpha['X'] = 10;
    alpha['L'] = 50;
    alpha['C'] = 100;
    alpha['D'] = 500;
    alpha['M'] = 1000;

    while (cin >> input) {
        long long ans = 0;
        
        input += 'A';

        for (int i = 0; i < input.size(); ) {
            if (alpha[input[i]] >= alpha[input[i + 1]]) {
                ans += alpha[input[i]];
                i++;
            }
            else {
                ans += (alpha[input[i + 1]] - alpha[input[i]]);
                i += 2;
            }
        }

        cout << ans << endl;
    }

    return 0;
}