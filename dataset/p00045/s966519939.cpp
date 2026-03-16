#include <bits/stdc++.h>
using namespace std;

int main() {
	int c = 0, v[100000], m[100000];
	while(scanf("%d,%d", &v[c], &m[c]) != EOF){
		c++;
	}
	
	int sum = 0, ave = 0;
	for(int i = 0; i < c; ++i){
		sum += v[i] * m[i];
		ave += m[i];
	}
	cout << sum << endl;
	
	double d = (ave / (double)c) - ave / c;
	if(d >= 0.5)
		cout << ave / c + 1 << endl;
	else
		cout << ave / c << endl;
	return 0;
}