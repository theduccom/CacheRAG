#include<iostream>
using namespace std;

#define MAX 2000000000

int main()
{
	int i, j;
	int n, num;

	while (cin>>n) {
		if (n == 0) break;
		num = 0;
		j = 1;
		for (i = 0; i < 9; i++) {
			j *= 5;
			num += n/j;
		}
		cout<<num<<endl;
	}
	return 0;
}