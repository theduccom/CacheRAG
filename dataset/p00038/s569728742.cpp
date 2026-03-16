#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    const string out[] = {"null", "one pair", "two pair", 
                          "three card","straight",
                          "full house", "four card"};
    char ch;
    int input[6];

    while (cin >> input[0]) {
        // Input
        for (int i = 1; i < 5; i++) 
            cin >> ch >> input[i];
        input[5] = 100;

        // Initialization
        sort(input, input + 5);

        // Algorithm
        int card[5] = {0};
        int cnt = 0;
        
        for (int i = 0; i < 5; i++) {
            if (input[i] == input[i + 1])
                cnt++;
            else {
                card[cnt]++;
                cnt = 0;
            }
        }

        if (card[3] == 1) 
            cout << out[6] << endl;
        else if (card[1] == 1 && card[2] == 1) 
            cout << out[5] << endl;
        else if (card[2] == 1) 
            cout << out[3] << endl;
        else if (card[1] == 2)
            cout << out[2] << endl;
        else if (card[1] == 1)
            cout << out[1] << endl;
        else if (card[0] == 5) {
            int i;
            for (i = 1; i < 4; i++) 
                if (input[i + 1] != input[1] + i)
                    break;
            if (i == 4 && ((input[0] == input[1] - 1) || (input[0] == 1))) 
                cout << out[4] << endl;
            else 
                cout << out[0] << endl;
        }
    }

    return 0;
}