#include <math.h>
#include <iostream>
using namespace std;

/** Problem0045 : Sum and Average **/
int main()
{
	unsigned inputNum=0, soldNum=0, value=0;
	unsigned tValue=0, tNum=0, out;
	char camma;
	
	while (cin >> tValue >> camma >> tNum) {
		inputNum++;
		soldNum += tNum;
		value += tValue*tNum;
	}
	
	out = (round)((double)soldNum/inputNum);
	
	cout << value << endl;
	cout << out << endl;
	
	return 0;
}