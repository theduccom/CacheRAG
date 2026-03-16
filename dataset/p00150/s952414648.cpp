#include <iostream>

using namespace std;

const int N = 10000;

class Solver {
    private:
        bool is_prime_[N + 1];
    public:
        Solver() {
            for (int i = 0; i <= N; ++i) {
                is_prime_[i] = true;
            }
            for (int i = 2; i <= N; ++i) {
                if (!is_prime_[i]) {
                    continue;
                }
                for (int j = 2; j * i <= N; ++j) {
                    is_prime_[j * i] = false;
                }
            }
        }
        int solve(int n) {
            for (int i = n; true; --i) {
                if (is_prime_[i] && is_prime_[i - 2]) {
                    return i;
                }
            }
        }
};

int main() {
    Solver s;
    int n, x;
    while (true) {
        cin >> n;
        if (n == 0) {
            return 0;
        }
        x = s.solve(n);
        cout << x - 2 << ' ' << x << endl;
    }
}