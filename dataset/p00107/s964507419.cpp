#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void)
{
	int a[3], n, b;
	while (scanf("%d %d %d", &a[0], &a[1], &a[2]), a[0]){
		sort(a, a + 3);
		int r = a[0]*a[0] + a[1]*a[1];
		cin >> n;
		for (int i = 0; i < n; i++){
			cin >> b;
			if (r < (b*2)*(b*2)) cout << "OK" << endl;
			else cout << "NA" << endl;
		}
	}
	
	return 0;
}