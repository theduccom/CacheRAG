#include <iostream>
#include <queue>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

typedef vector<int> V;
typedef queue<V> Q;
typedef map<V, int> M;

class Solver {
    private:
        M min_count;
    public:
        Solver() {
            V p0(8);
            Q q;
            int zi;
            for (int i = 0; i < 8; ++i) {
                p0[i] = i;
            }
            q.push(p0);
            min_count[p0] = 0;
            while (!q.empty()) {
                V p = q.front();
                int n = min_count[p];
                q.pop();
                zi = 0;
                while (p[zi] != 0) {
                    ++zi;
                }
                if (zi != 0 && zi != 4) {
                    V p2 = p;
                    swap(p2[zi], p2[zi - 1]);
                    if (min_count.find(p2) == min_count.end()) {
                        min_count[p2] = n + 1;
                        q.push(p2);
                    }
                }
                if (zi != 3 && zi != 7) {
                    V p2 = p;
                    swap(p2[zi], p2[zi + 1]);
                    if (min_count.find(p2) == min_count.end()) {
                        min_count[p2] = n + 1;
                        q.push(p2);
                    }
                }
                if (zi < 4) {
                    V p2 = p;
                    swap(p2[zi], p2[zi + 4]);
                    if (min_count.find(p2) == min_count.end()) {
                        min_count[p2] = n + 1;
                        q.push(p2);
                    }
                } else {
                    V p2 = p;
                    swap(p2[zi], p2[zi - 4]);
                    if (min_count.find(p2) == min_count.end()) {
                        min_count[p2] = n + 1;
                        q.push(p2);
                    }
                }
            }
        }
        int solve(int puzzle[]) {
            V p(8);
            for (int i = 0; i < 8; ++i) {
                p[i] = puzzle[i];
            }
            return min_count[p];
        }
};

int main() {
    int puzzle[8];
    Solver s;
    while (true) {
        for (int i = 0; i < 8; ++i) {
            cin >> puzzle[i];
        }
        if (cin.eof()) {
            return 0;
        }
        cout << s.solve(puzzle) << endl;
    }
}