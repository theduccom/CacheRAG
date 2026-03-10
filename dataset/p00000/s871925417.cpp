#include <iostream>
using namespace std;

int main()
{
	int num1,num2;

	for(num1=1;num1<=9;num1++){

		for(num2=1;num2<=9;num2++){
			int ans = num1*num2;
			cout << num1 << "x" << num2 << "=" << ans << endl;
		}
	}
	return 0;
}