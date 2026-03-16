#include <iostream>
using namespace std;

int main(void){
	int sum=0,num=0,n=0;
	while(true){
		char tmp;
		int a,b;
		cin >> a >> tmp >> b;
		if(cin.eof())
			break;
		sum+=a*b;
		num+=b;
		n++;
	}
	int ave=((double)num/n)+0.5;
	cout << sum << endl << ave << endl;
	return 0;
}