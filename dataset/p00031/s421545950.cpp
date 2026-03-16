#include <iostream>
#include <math.h>
using namespace std;
int main(void)
{
	int n;
	while(cin >> n){
		int count=0;
		bool first = true;
		while(n){
			if(n%2){
				if(first){
					cout << pow(2,count);
					first = false;
				}else cout << " " << pow (2,count);
			}
			count++;
			n/=2;
		}
		cout << endl;
	}
	return 0;
}