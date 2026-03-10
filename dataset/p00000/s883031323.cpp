#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>

using namespace std;

int main(){
	int a;
	int b;
	for (a = 1; a <= 9; a++){
		for (b = 1; b <= 9; b++){
			cout << a << "x" << b << "=" << a * b << endl;
		}
	}

	return 0;
}