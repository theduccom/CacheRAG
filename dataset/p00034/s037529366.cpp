#include<iostream>
#include<stdio.h>
#include<vector>
#include<utility>
#include<queue>
#include<math.h>
#include<string>
#include<stack>
#include<typeinfo>
using namespace std;
typedef pair<int, int> P;
int main() {
	// x/u=(l-x)/v
	//ul-ux=xv
	//xv+ux=ul
	//x=ul/(v+u)//x=1から見た長さu=1からくる電車の速度
	int  l[10];
	vector<int>rui(11,0);
	double v1, v2, sum,x;
	char ch;
	while (cin>>l[0]>>ch) {
		sum = 0;
		sum += l[0];
		rui[1] = l[0];
		for (int i = 1; i < 10; ++i) {
			cin >> l[i] >> ch;
			sum += l[i];
			rui[i + 1] = l[i] + rui[i];
		}
		cin >> v1 >> ch >> v2;
		x = v1*sum / (v2 + v1);
		for (int i = 1; i <= 10; ++i) {
			if (rui[i - 1] < x&&x < rui[i] || x == rui[i]) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}
