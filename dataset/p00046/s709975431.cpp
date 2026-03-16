#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	double a[50];
	int n = 0;
	while(cin >> a[n])n++;
	sort(a, a+n);
	cout << a[n-1] - a[0] << endl;
	return 0;
}