#include <iostream>
#include <algorithm>
using namespace std;
int main(){	
	int a, b, count = 0, ans = 0;
	double ans2 = 0;
	char c;
	while (cin >> a >> c >> b){
		ans += a*b;
		ans2 += b;
		count++;
	}
	ans2 /= count;
	ans2 += 0.5;
	cout << ans << endl << (int)ans2 << endl;
}