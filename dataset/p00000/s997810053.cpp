#include <iostream>

#define rep(i, n) for(int i = 1; i <= n; i ++)

using namespace std;

int main(void){
	rep(i, 9)rep(j, 9) cout << i << "x" << j << "=" << i * j << endl;

	return 0;
}