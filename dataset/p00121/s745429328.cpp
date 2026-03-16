/*
    頭
 */

#include <cstdio>
#include <cstring>
#include <set>
using namespace std;

typedef pair<int, int> Data;
typedef pair<Data, int> Pair;
Pair queue[10000];
int base;
int head;

unsigned int start;
short hascounted[16777215];
int di[][3] = {{1, 4, -1}, {-1, 1, 4}, {-1, 1, 4}, {-1, 4, 100}, {1, -4, -100}, {-1, 1, -4}, {-1, 1, -4}, {-1, -4, 1}};

inline void push(Pair p) {
    queue[head] = p;
    head = (head+1) % 10000;
}

inline Pair front() {
    return queue[base];
}

inline void pop() {
    base = (base+1) % 10000;
}

inline bool empty() {
    return head == base;
}
int main() {
    push(Pair(Data(001234567, 0), 0));

    while (1) {
        start = 0;
        for (int i=0; i<2; i++) {
            for (int j=0; j<4; j++) {
                int digit;

                if (scanf("%d", &digit) == EOF) return 0;
                start = start * 8 + digit;
            }
        }

        if (start == 001234567) {
            printf("0\n");
            continue;
        }

        while (!empty() && !hascounted[start]) {
            Pair p = front(); pop();
            int state = p.first.first;
            int time = p.first.second;
            int pos  = p.second;

            for (int k=0; k<3; k++) {
                int newpos = pos + di[pos][k];
                int mask;
                unsigned int newstate;
                int a;
                int b;

                if (newpos < 0 || 8 <= newpos) break;

                a = 21L-pos*3;
                b = 21L-newpos*3;

                mask = (7 << a) | (7 << b);
                newstate = (state & ~mask);
                newstate |= ((state >> a) & 0x7) << b;
                newstate |= ((state >> b) & 0x7) << a;
                if (!hascounted[newstate]) {
                    push(Pair(Data(newstate, time+1), newpos));
                    hascounted[newstate] = time+1;
                }
            }
        }

        printf("%d\n", hascounted[start]);
    }
}