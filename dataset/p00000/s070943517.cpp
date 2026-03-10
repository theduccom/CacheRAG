#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			int result = i*j;
			cout << i << "x"<< j <<"=" << result << endl;
		}
	}
	
	return 0;
}