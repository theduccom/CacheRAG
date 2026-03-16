#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>
#include <complex>
using namespace std;
int main() {
	int n,n5;
	while (cin >> n, n != 0){
		n5 = n;
		int five = 0;
		int two = 0;
		while (n / 2 != 0){ 
			two += n / 2;
			n /= 2;
		}
		while (n5 / 5 != 0) {
			five += n5 / 5;
			n5 /= 5;
		}
		cout <<min(two,five)<<endl;

	}
}