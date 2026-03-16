// 2013/09/09 Tazoe

#include <iostream>
using namespace std;

int main()
{
	int b1, b2, b3;
	cin >> b1 >> b2 >> b3;

	if(b1==1 && b2==0 && b3==0){
		cout << "Close\n";
	}
	else if(b1==0 && b2==1 && b3==0){
		cout << "Close\n";
	}
	else if(b1==1 && b2==1 && b3==0){
		cout << "Open\n";
	}
	else if(b1==0 && b2==0 && b3==1){
		cout << "Open\n";
	}
	else if(b1==0 && b2==0 && b3==0){
		cout << "Close\n";
	}

	return 0;
}