#include <iostream>
#include <queue>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

typedef vector<int> V;
typedef queue<V> QV;
typedef queue<int> QI;

int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; ++i) {
        f *= i;
    }
    return f;
}

int v2i(V &v) {
    int n = 0;
    int f = fact(8);
    bool is_used[8];
    for (int i = 0; i < 8; ++i) {
        is_used[i] = false;
    }
    for (int i = 0; i < 8; ++i) {
        f /= 8 - i;
        int count = 0;
        for (int j = 0; j < v[i]; ++j) {
            if (!is_used[j]) {
                ++count;
            }
        }
        n += count * f;
        is_used[v[i]] = true;
    }
    return n;
}

class Solver {
    private:
        int min_count[40320];
    public:
        Solver() {
            V p0(8);
            QV q;
            QI qi;
            int zi;
            for (int i = 0; i < 8; ++i) {
                p0[i] = i;
            }
            for (int i = 0; i < 40320; ++i) {
                min_count[i] = 1e9;
            }
            q.push(p0);
            qi.push(v2i(p0));
            min_count[qi.front()] = 0;
            while (!q.empty()) {
                V p = q.front();
                int n = qi.front();
                q.pop();
                qi.pop();
                zi = 0;
                while (p[zi] != 0) {
                    ++zi;
                }
                if (zi != 0 && zi != 4) {
                    V p2 = p;
                    swap(p2[zi], p2[zi - 1]);
                    int n2 = v2i(p2);
                    if (min_count[n2] > min_count[n] + 1) {
                        min_count[n2] = min_count[n] + 1;
                        q.push(p2);
                        qi.push(n2);
                    }
                }
                if (zi != 3 && zi != 7) {
                    V p2 = p;
                    swap(p2[zi], p2[zi + 1]);
                    int n2 = v2i(p2);
                    if (min_count[n2] > min_count[n] + 1) {
                        min_count[n2] = min_count[n] + 1;
                        q.push(p2);
                        qi.push(n2);
                    }
                }
                if (zi < 4) {
                    V p2 = p;
                    swap(p2[zi], p2[zi + 4]);
                    int n2 = v2i(p2);
                    if (min_count[n2] > min_count[n] + 1) {
                        min_count[n2] = min_count[n] + 1;
                        q.push(p2);
                        qi.push(n2);
                    }
                } else {
                    V p2 = p;
                    swap(p2[zi], p2[zi - 4]);
                    int n2 = v2i(p2);
                    if (min_count[n2] > min_count[n] + 1) {
                        min_count[n2] = min_count[n] + 1;
                        q.push(p2);
                        qi.push(n2);
                    }
                }
            }
        }
        int solve(int puzzle[]) {
            V p(8);
            for (int i = 0; i < 8; ++i) {
                p[i] = puzzle[i];
            }
            return min_count[v2i(p)];
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