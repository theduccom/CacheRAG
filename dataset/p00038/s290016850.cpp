#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    char c1, c2, c3, c4;
    int card[5] = {};
    
    while (cin >> card[0] >> c1 >> card[1] >> c2 >> card[2] >> c3 >> card[3] >> c4 >> card[4]) {
        sort(card, card + 5);

        if (card[0] == card[3] || card[1] == card[4]) {
            cout << "four card" << endl;
        }
        else if ((card[0] == card[2] && card[3] == card[4]) || (card[0] == card[1] && card[2] == card[4])) {
            cout << "full house" << endl;
        }
        else if (card[0] + 1 == card[1] && card[1] + 1 == card[2] && card[2] + 1 == card[3] && card[3] + 1 == card[4]) {
            cout << "straight" << endl;
        }
        else if (card[0] == 1 && card[1] == 10 && card[2] == 11 && card[3] == 12 && card[4] == 13) {
            cout << "straight" << endl;
        }
        else if (card[0] == card[2] || card[1] == card[3] || card[2] == card[4]) {
            cout << "three card" << endl;
        }
        else if ((card[0] == card[1] && (card[2] == card[3] || card[3] == card[4])) || (card[1] == card[2] && card[3] == card[4])) {
            cout << "two pair" << endl;
        }
        else if (card[0] == card[1] || card[1] == card[2] || card[2] == card[3] || card[3] == card[4]) {
            cout << "one pair" << endl;
        }
        else {
            cout << "null" << endl;
        }
    }
    return 0;
}