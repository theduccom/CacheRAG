#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(void)
{
	int a,b,c,n = 0;
	
	cin >> a >> b >> c ;
	n = a * 100 + b * 10 + c ;
	
	if(n == 110 || n == 001 )
		cout << "Open" << endl ;
	
	else 
		cout << "Close" << endl ;
	
	return 0;
}