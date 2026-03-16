#include <iostream>
#include <queue>

int main(void) {
    u_int m, n;

    std::cin >> n >> m;
    for (; m != 0 && n != 0; std::cin >> n >> m) {
        std::priority_queue<u_int> p;
        for (u_int i = 0, tmp; i < n; ++i) {
            std::cin >> tmp;
            p.push(tmp);
        }

        u_int sum = 0;
        for (u_int i = 1; i <= n; ++i) {
            if (i % m) {
                sum += p.top();
                p.pop();
            } else {
                if (!p.empty()) p.pop();
            }
        }

        std::cout << sum << std::endl;
    }

    return 0;
}