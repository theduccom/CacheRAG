#include <iostream>
#include <algorithm>

using namespace std;

int h[5];

bool four_card() {
    if ( (h[0] == h[1] && h[1] == h[2] && h[2] == h[3]) ||
         (h[1] == h[2] && h[2] == h[3] && h[3] == h[4]) )
        return true;
    else 
        return false;
}

bool full_house() {
    if ( ((h[0] == h[1] && h[1] == h[2]) && (h[3] == h[4])) || ((h[0] == h[1]) && (h[2] == h[3] && h[3] == h[4])) ) 
        return true;
     else
        return false;
}

bool three_card() {
    if ( (h[0] == h[1] && h[1] == h[2]) ||
         (h[1] == h[2] && h[2] == h[3]) ||
         (h[2] == h[3] && h[3] == h[4]) ) 
        return true;
    else 
        return false;
}

bool straight() {
    if ( (h[0] + 1 == h[1]) &&
         (h[1] + 1 == h[2]) &&
         (h[2] + 1 == h[3]) &&
         (h[3] + 1 == h[4]) )
        return true;
    else {
        if (h[0] == 1 && h[1] == 10 
                      && h[2] == 11
                      && h[3] == 12
                      && h[4] == 13)
            return true;
        return false;
    }
}

bool two_pair() {
    if ( (h[0] == h[1] && h[2] == h[3]) ||
         (h[0] == h[1] && h[3] == h[4]) ||
         (h[1] == h[2] && h[3] == h[4]) )
        return true;
    else 
        return false;
}
        
bool one_pair() {
    if (h[0] == h[1] || h[1] == h[2] || h[2] == h[3] || h[3] == h[4]) 
        return true;
    else 
        return false;
}

void find_hand() {
    sort(h, h+5);
    if (four_card()) {
        cout << "four card" << endl;
    } else if (full_house()) {
        cout << "full house" << endl;
    } else if (straight()) {
        cout << "straight" << endl;
    } else if (three_card()) {
        cout << "three card" << endl;
    } else if (two_pair()) {
        cout << "two pair" << endl;
    } else if (one_pair()) {
        cout << "one pair" << endl;
    } else {
        cout << "null" << endl;
    }
}

int main() {
    char dm;
    while (cin >> h[0] >> dm 
               >> h[1] >> dm
               >> h[2] >> dm
               >> h[3] >> dm
               >> h[4] ) {
        find_hand();
    }
    return 0;
}