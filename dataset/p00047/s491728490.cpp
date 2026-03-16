#include <cstdio>

int main() {
    int co = 0;
    bool cur[3] = { true, false, false };
    int tr[100] = { 0 };
    int wt[100] = { 0 };

    {
        char intr;
        char inwt;
        while (scanf(" %c , %c", &intr, &inwt) != EOF) {
            tr[co] = intr - 'A';
            wt[co] = inwt - 'A';
            co++;
        }
    }

    for (int i = 0; i < co; ++i) {
        int ttr = tr[i];
        int twt = wt[i];
        bool t = cur[ttr];
        cur[ttr] = cur[twt];
        cur[twt] = t;
    }

    char re = 0;
    for (int i = 0; i < 3; ++i) {
        if (cur[i]) {
            re = i;
            break;
        }
    }
    printf("%c\n", re + 'A');

    return 0;
}