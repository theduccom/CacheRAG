#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, i = 0;
	int v,n;
	while(cin >> v){
		cin.ignore();
		cin >> n;
		a += v * n;
		b += n;
		++i;
	}
	cout << a << endl << ((b * 10 / i) + 5) / 10 << endl;
}