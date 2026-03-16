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
	string s;

	cin >> n;

	while(n--){
		int imax, imin;
		cin >> s;
		sort(s.begin(), s.end());
		imin = atoi(s.c_str());
		reverse(s.begin(), s.end());
		imax = atoi(s.c_str());

		cout << imax - imin << endl;
	}


	return 0;
} 