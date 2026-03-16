#include <iostream>
using namespace std;
 
bool f(int p) {
    for (int i=2; i*i<=p; i++) {
        if (p % i == 0) return false;
    }
    return true;
}
 
int main() {
    int N;
    while (cin >> N) {
        int p1, p2;
        for (p1=N-1; ; p1--) if (f(p1)) break;
        for (p2=N+1; ; p2++) if (f(p2)) break;
        cout << p1 << " " << p2 << endl;
    }
    return 0;
}
