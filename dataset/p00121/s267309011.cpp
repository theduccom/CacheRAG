#include <bits/stdc++.h>
using namespace std;

int a[8];
map<int, int> mp;
int st[8][3] = {
    {1, 4, -1},
    {0, 2, 5},
    {1, 3, 6},
    {2, 7, -1},
    {0, 5, -1},
    {1, 4, 6},
    {2, 5, 7},
    {3, 6, -1}
};

bool game_over(int* state) {
    for(int i = 0; i < 8; ++i) {
        if(state[i] != i) return false;
    }
    return true;
}

void to_state(int s, int* state) {
    for(int i = 7; i >= 0; --i) {
        state[i] = s % 10;
        s /= 10;
    }
}

int get_state(int* state) {
    int res = 0;
    for(int i = 0; i < 8; ++i) {
        res = res * 10 + state[i];
    }
    return res;
}
void init() {
    queue<int> q;
    q.push(1234567);
    mp[1234567] = 0;
    int is_found = false;
    int state[8];
    while(!q.empty()) {
        int now = q.front();
        q.pop();
        to_state(now, state);
        int zero_pos = find(state, state + 8, 0) - state;
        for(int i = 0; i < 3; ++i) {
            if(st[zero_pos][i] != -1) {
                swap(state[st[zero_pos][i]], state[zero_pos]);
                int ns = get_state(state);
                if(mp.count(ns) == 0) {
                    mp[ns] = mp[now] + 1;
                    q.push(ns);
                }
                swap(state[st[zero_pos][i]], state[zero_pos]);
            }
        }
    }
}
int main() {
    init();
    while(true) {
        for(int i = 0; i < 8; ++i) {
            if(scanf("%d", a + i) == EOF) goto END;
        }
        int start = get_state(a);
        printf("%d\n", mp[start]);
    }
END:
    return 0;
}

