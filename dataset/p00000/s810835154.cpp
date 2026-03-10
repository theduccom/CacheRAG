#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	for (int i = 1; i < 10; i++){
		for (int j = 1; j < 10; j++){
			cout << i << "x" << j << "=" << i*j << endl;
		}
	}
	return 0;
}