#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	double a;
	double maxv = 0;
	double minv = 1 << 12;
	int i = 0;
	while (cin >> a){
		maxv = max(maxv, a);
		minv = min(minv, a);
		i++;
	}
	cout << maxv - minv << endl;
}