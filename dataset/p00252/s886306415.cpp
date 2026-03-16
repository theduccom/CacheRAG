#include <iostream>
using namespace std;
#define rep2(x,from,to) for(int x=(from);x<(to);++(x))
#define rep(x,to) rep2(x,0,to)
int main() {
	int x, y, z;
	cin >> x >> y >> z;
	if(x && y && !z || !x && !y && z) cout << "Open" << endl;
	else cout << "Close" << endl;
}