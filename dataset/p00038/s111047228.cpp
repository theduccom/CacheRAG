#include <iostream>
#include <cstdio>
using namespace std;

bool isFourCards(int* cards) {
    return cards[0] == cards[3] || cards[1] == cards[4];
}

bool isFullHouse(int* cards) {
    return cards[0] == cards[1] && cards[3] == cards[4] && (cards[2] == cards[1] || cards[2] == cards[3]);
}

bool isStraight(int* cards) {
    return cards[1] + 1 == cards[2] && cards[2] + 1 == cards[3] && cards[3] + 1 == cards[4]
        && (cards[0] + 1 == cards[1] || (cards[0] == 1 && cards[4] == 13));
}

bool isThreeCards(int* cards) {
    return (cards[0] == cards[1] && cards[1] == cards[2])
        || (cards[1] == cards[2] && cards[2] == cards[3])
        || (cards[2] == cards[3] && cards[3] == cards[4]);
}

bool isTwoPairs(int* cards) {
    return (cards[0] == cards[1] && cards[2] == cards[3])
        || (cards[0] == cards[1] && cards[3] == cards[4])
        || (cards[1] == cards[2] && cards[3] == cards[4]);
}

bool isOnePair(int* cards) {
    return cards[0] == cards[1] || cards[1] == cards[2] || cards[2] == cards[3] || cards[3] == cards[4];
}

int main() {
    const char* hands[] = {
        "four card", "full house", "straight", "three card", "two pair", "one pair", "null",
    };
    int cards[5];
    while (scanf("%d,%d,%d,%d,%d", &cards[0], &cards[1], &cards[2], &cards[3], &cards[4]) != EOF) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4 - i; j++) {
                if (cards[j] > cards[j + 1]) {
                    int temp = cards[j];
                    cards[j] = cards[j + 1];
                    cards[j + 1] = temp;
                }
            }
        }
        int ret = 6;
        if (isFourCards(cards)) {
            ret = 0;
        } else if (isFullHouse(cards)) {
            ret = 1;
        } else if (isStraight(cards)) {
            ret = 2;
        } else if (isThreeCards(cards)) {
            ret = 3;
        } else if (isTwoPairs(cards)) {
            ret = 4;
        } else if (isOnePair(cards)) {
            ret = 5;
        }
        cout << hands[ret] << endl;
    }
}