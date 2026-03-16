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

int pyra[150000000];
int save[150000000];

int main(){
	double n[10];
	while (cin >> n[0]) {
	  long double ans = 0;
	  for (int i = 1; i < 10; i++) {
		  if (i % 2 == 0) {
			  n[i] = n[i - 1] / 3;
		  } else {
			  n[i] = n[i - 1] * 2;
		  }
	  }
	  for (int i = 0; i < 10; i++) {
		  ans += n[i];
		}
		cout.precision(10);
	  cout << ans << endl;
  }
	return 0;
}