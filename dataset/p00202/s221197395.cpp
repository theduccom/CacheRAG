#include <iostream>
#include <cstring>

using namespace std;

#define MAX_X 1000001
#define MAX_N 30

bool is_prime[MAX_X];

void init() {
    memset(is_prime, 1, sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < MAX_X; i++) 
        if (is_prime[i]) 
            for (int j = i+i; j < MAX_X; j+=i) 
                is_prime[j] = false;
}

bool can_make[MAX_X];

int n, x;
int dish[MAX_N];
bool input() {
    cin >> n >> x;
    if (n == 0 && x == 0) return false;
    for (int i = 0; i < n; i++) 
        cin >> dish[i];

    memset(can_make, 0, sizeof(can_make));
    can_make[0] = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= x; j++) {
            if (j >= dish[i] && can_make[j-dish[i]])
                can_make[j] = true;
        }
    }
    return true;
}

int main() {
    init();
    while (input()) {
        bool found = false;
        while (x) {
            if (is_prime[x] && can_make[x]) {
                found = true;
                cout << x << endl;
                break;
            }
            x--;
        }
        if (!found) cout << "NA" << endl;
    }
    return 0;
}