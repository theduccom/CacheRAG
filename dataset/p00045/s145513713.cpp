#include<iostream>
using namespace std;
int main() {
	int price, mount, sum, cnt;
	char c;
	double ave;
	while( cin >> price >> c >> mount ){
		sum += price * mount;
		ave += mount;
		cnt++;
	}
	cout << sum << endl;
	cout << (int)((ave/ cnt) + 0.5) << endl;
}