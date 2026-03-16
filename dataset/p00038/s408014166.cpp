#include <stdio.h>
#include <string>

using namespace std;

int main() {
        const int N = 5;
        const string yaku[] = {
                "null",
                "one pair",
                "two pair",
                "three card",
                "straight",
                "full house",
                "four card"
        };

        while (true) {
                int tehuda[N];
                int ans;
                int input = scanf("%d,%d,%d,%d,%d",
                        &tehuda[0], &tehuda[1], &tehuda[2], &tehuda[3], &tehuda[                                                      4]);
                if (input == EOF) {
                        break;
                }
                for (int i = 0; i < N; i++) {
                        for (int j = N - 1; j > i; j--) {
                                if (tehuda[j - 1] > tehuda[j]) {
                                        int tmp = tehuda[j - 1];
                                        tehuda[j - 1] = tehuda[j];
                                        tehuda[j] = tmp;
                                }
                        }
                }

                if ((tehuda[0] == tehuda[1] && tehuda[1] == tehuda[2] &&
                                        tehuda[2] == tehuda[3]) ||
                                (tehuda[1] == tehuda[2] && tehuda[2] == tehuda[3                                                      ] &&
                                 tehuda[3] == tehuda[4])) {
                        ans = 6;
                } else if ((tehuda[0] == tehuda[1] && tehuda[1] == tehuda[2] &&
                                        tehuda[3] == tehuda[4]) ||
                                (tehuda[0] == tehuda[1] && tehuda[2] == tehuda[3                                                      ] &&
                                 tehuda[3] == tehuda[4])) {
                        ans = 5;
                } else if ((tehuda[0] == tehuda[1] && tehuda[1] == tehuda[2]) ||
                                (tehuda[1] == tehuda[2] && tehuda[2] == tehuda[3                                                      ]) ||
                                (tehuda[2] == tehuda[3] && tehuda[3] == tehuda[4                                                      ])) {
                        ans = 3;
                } else if ((tehuda[0] == tehuda[1] && (tehuda[2] == tehuda[3] ||
                                                tehuda[3] == tehuda[4])) ||
                                (tehuda[1] == tehuda[2] && tehuda[3] == tehuda[4                                                      ])) {
                        ans = 2;
                } else if ((tehuda[0] == tehuda[1]) || (tehuda[1] == tehuda[2])                                                       ||
                                (tehuda[2] == tehuda[3]) || (tehuda[3] == tehuda                                                      [4])) {
                        ans = 1;
                } else if ((tehuda[0] + tehuda[4] == tehuda[2] * 2 &&
                                        tehuda[2] * 2 == tehuda[1] + tehuda[3])                                                       ||
                                (tehuda[0] == 1 && tehuda[1] == 10 && tehuda[2]                                                       == 11 &&
                                 tehuda[3] == 12 && tehuda[4] == 13)) {
                        ans = 4;
                } else {
                        ans = 0;
                }
                printf("%s\n", yaku[ans].c_str());
        }

        return 0;
}