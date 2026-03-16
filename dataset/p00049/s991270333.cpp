#include <iostream>
using namespace std;

int main()
{
	int A=0,B=0,O=0,AB=0;
	int n;
	char dot,blood[3];
	while(cin >> n >> dot >> blood){
		if(blood[0] == 'A' && blood[1] == 'B')
			AB++;
		else if(blood[0] == 'A')
			A++;
		else if(blood[0] == 'B')
			B++;
		else if(blood[0] == 'O')
			O++;
	}
	cout << A << endl;
	cout << B << endl;
	cout << AB << endl;
	cout << O << endl;
	return 0;
}