#define _CRT_SECURE_NO_WARNINGS

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<list>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;
#define no_way 100000000;


int d[400][400];


int main(int argc, char **argv){
	int cnt = 0;
	int n;
	while (cin >> n && n != 0) {
		cnt = 0;
		for (int i = 1; i <= n; i++) {
			int tmp = i;
			while (tmp % 5 == 0 && tmp != 0) {
				cnt++;
				tmp = tmp / 5;
			}
		}
		cout << cnt << endl;
	}

	return 0;
}