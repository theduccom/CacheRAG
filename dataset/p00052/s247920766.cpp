#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int n;

	while(cin >> n){
		if(n == 0){
			break;
		}

		int count = 0;

		while(n > 0){
			n /= 5;
			count += n;
		}

		cout << count << endl;
	}

	return 0;
} 