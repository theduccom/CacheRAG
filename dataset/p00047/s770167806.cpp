#include <iostream>
#include <cstdio>

using namespace std;
#define rep2(x,from,to) for(int x = (from); x < (to); ++(x))
#define rep(x,to) rep2(x,0,to)

int main() {
	char cup = 'A', x, y;
	while(scanf("%c,%c", &x, &y) != EOF) {
		if(x == cup) cup = y;
		else if(y == cup) cup = x;
	}
	cout << cup << endl;
	return 0;
}