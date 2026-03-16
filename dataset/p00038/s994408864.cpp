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

    vector<int> cards(5);
    char comma;

    while(cin >> cards[0] >> comma >> cards[1] >> comma >> cards[2] >> comma >> cards[3] >> comma >> cards[4]) {
        sort(cards.begin(), cards.end());

        if(cards[0] == cards[3] || cards[1] == cards[4]) {
            cout << "four card" << endl;
        } else if ( (cards[0] == cards[2] && cards[3] == cards[4]) || (cards[0] == cards[1] && cards[2] == cards[4]) ) {
            cout << "full house" << endl;
        } else if ( cards[1] == cards[2] - 1 && cards[2] == cards[3] - 1 && cards[3] == cards[4] - 1) {
            if (cards[0] == cards[1] - 1 || ( cards[0] == 1 && cards[4] == 13 )) {
                cout << "straight" << endl;
            } else if (cards[0] == cards[1]) {
                cout << "one pair" << endl;
            } else {
                cout << "null" << endl;
            }
        } else if ( cards[0] == cards[2] || cards[1] == cards[3] || cards[2] == cards[4] ) {
            cout << "three card" << endl;
        } else if ( cards[0] == cards[1] ) {
            if (cards[2] == cards[3] || cards[3] == cards[4]) {
                cout << "two pair" << endl;
            } else {
                cout << "one pair" << endl;
            }
        } else if ( cards[1] == cards[2] ) {
            if (cards[3] == cards[4]) {
                cout << "two pair" << endl;
            } else {
                cout << "one pair" << endl;
            }
        } else if ( cards[2] == cards[3] || cards[3] == cards[4] ) {
            cout << "one pair" << endl;
        } else {
            cout << "null" << endl;
        }

    }


     
    return 0;
}