#include <iostream>
using namespace std;

int main(void){
	int a,b;
	char tmp;

	int sum = 0, sum2 = 0;
	int n = 0;

	while(cin>>a>>tmp>>b){
		n++;
		sum2 += b;
		sum += a * b;
	}
	cout<<sum<<endl<<(int)((double)sum2/n+0.5)<<endl;

	return 0;
}