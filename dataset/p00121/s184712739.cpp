#include <cstdio>
#include <map>
#include <queue>
#include <cstring>

#define PRINTF(...) 

using namespace std;

map<int, int> mp;
int goal[8] = {0, 1, 2, 3, 4, 5, 6, 7};

static inline int encode(int arg[8]) {
    int ret = 0;
    for (int i = 0; i < 8; i++) {
        ret += arg[i] * (1 << (3 * (7 - i)));
    }
    return ret;
}

void decode(int e, int *ret) {
    for (int i = 0; i < 8; i++) {
        ret[7 - i] = (e >> (3 * i)) & 7;
    }
}

int egoal = encode(goal);

void solve_all() {
    queue<int> q;
    int count = 0;

    int e = encode(goal);
    q.push(e);
    mp[e] = 0;

    while (q.size()) {
        int cp[8];
        int ce = q.front(); q.pop();
        decode(ce, cp);
        int cn = mp[ce];

        PRINTF("now cp: \n");
        for (int j = 0; j < 8; j++) {
            PRINTF("%d", cp[j]);
            if (j == 3) 
                PRINTF("\n");
        }
        PRINTF("\n");

        // Find zero
        int z = 0;
        for (int i = 0; i < 8; i++) {
            if (cp[i] == 0) {
                z = i;
                break;
            }
        }
        PRINTF("zero is %d\n", z);

        int zy = (z >= 4);
        int zx = z % 4;
        //PRINTF("    z: %d, zy: %d, zx: %d\n", z, zy, zx);
        int dirs[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        for (int i = 0; i < 4; i++) {
            int ny = zy + dirs[i][0];
            int nx = zx + dirs[i][1];
            int nz = z + dirs[i][0] * 4 + dirs[i][1];
            if (nx >= 0 && nx < 4 && ny >= 0 && ny < 2) {
                int np[8];
                memcpy(np, cp, sizeof(np));

                // Swap
                //PRINTF("    swapping %d:[%d, %d] %d:[%d, %d]\n", z, zy, zx, nz, ny, nx);
                int tmp = np[z];
                np[z] = np[nz];
                np[nz] = tmp;
                //PRINTF("    swapped \n    ");
                for (int j = 0; j < 8; j++) {
                    //PRINTF("%d", np[j]);
                }
                //PRINTF("\n");

                int ne = encode(np);
                auto itr = mp.find(ne);
                if (itr == mp.end() || cn + 1 < itr->second) {
                    //PRINTF("   not found or not min. cn:%d, sec:%d\n", cn, itr->second);
                    q.push(ne);
                    mp[ne] = cn + 1;
                } else {
                    //PRINTF("   found or min. cn:%d\n", cn);
                    if (itr != mp.end()) {
                        //PRINTF("    sec:%d\n", itr->second);
                    }
                }
            }
        }

    }
}

int main() {
    solve_all();
    while (true) {
        int puzzles[7];
        for (int i = 0; i < 8; i++) {
            if (scanf(" %d", &puzzles[i]) == EOF) 
                return 0;
        }
        PRINTF("solving: ");
        for (int i = 0; i < 8; i++) {
            PRINTF("%d ", puzzles[i]);
        }
        PRINTF("\n");
        printf("%d\n", mp[encode(puzzles)]);
    }
}