#include<iostream>
using namespace std;
int main()
{
	int n,a;
	while( cin >> n ){
		if(n == 0)
			break;
		a = 0;
		while( n != 0){
			a += n/5;
			n /= 5;
		}
		cout << a << endl;
	}
}