#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin >> n){
		if(!n)
			break;
		int count=0;
		while(n){
			count+=n/5;
			n/=5;
		}
		cout << count << endl;
	}
	return 0;
}