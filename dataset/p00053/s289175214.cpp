#include <iostream>
#include <vector>

using namespace std;

#define N 104730

bool table[N];
vector<int> prime;

int main() {
    int size = 0;
    for (int i = 2; i < N; i++) {
        if (table[i] == false) {
            for (int j = i; j < N; j += i) {
                table[j] = true;
            }
            prime.push_back(i);
            size++;
        }
    }
    int n;
    while (cin >> n && n != 0) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += prime[i];
        }
        cout << sum << endl;
    }
    
    return 0;
}