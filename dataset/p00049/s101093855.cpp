#include <iostream>
#include <string>
using namespace std;

int main()
{
	char c;
	string str;
	int n,A,B,AB,O; 
	
	A=B=AB=O=0;
	while(cin >> n >> c>> str)
	{
		if(str=="A") A++;
		if(str=="B") B++;
		if(str=="O") O++;
		if(str=="AB") AB++;
	}
	cout << A << endl;
	cout << B << endl;
	cout << AB << endl;
	cout << O << endl;
}