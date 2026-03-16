#include <iostream>
using namespace std;

#define p100 (a == 1 && b == 0 && c == 0)
#define p010 (a == 0 && b == 1 && c == 0)
#define p110 (a == 1 && b == 1 && c == 0)
#define p001 (a == 0 && b == 0 && c == 1)
#define p000 (a == 0 && b == 0 && c == 0)

int main() {
	int a, b, c; cin >> a >> b >> c;
	if (p110 || p001) cout << "Open" << endl;
	if (p100 || p010 || p000) cout << "Close" << endl;
	return 0;
}
