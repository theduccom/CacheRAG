#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, w[] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
    while (cin >> n) {
        int s = 0;
        vector<int> vec;
        while (n > 0) {
            if (n % 2 == 1) {
                vec.push_back(w[s]);
            }
            n /= 2;
            s++;
        }
        for (int i = 0; i < vec.size() - 1; i++) {
            cout << vec[i] << " ";
        }
        cout << vec[vec.size() - 1] << endl;
    }

    return 0;
}