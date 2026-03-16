#include <iostream>
#include <queue>
using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        queue<int> que;
        long long employeeSales[4001] = {};
        for (int i = 0; i < n; i++) {
            int employee, price, num;
            cin >> employee >> price >> num;
            employeeSales[employee] += (long long) price * num;
            que.push(employee);
        }
        bool NAFlag = true;
        while (!que.empty()) {
            int i = que.front();
            que.pop();
            if (employeeSales[i] >= 1000000) {
                cout << i << endl;
                employeeSales[i] = -1;
                NAFlag = false;
            }
        }
        if (NAFlag) {
            cout << "NA" << endl;
        }
    }
}