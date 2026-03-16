#include <iostream>
using namespace std;
int main(void)
{
	int a,b,c;
	int rec=0;
	int loz=0;
	while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
		if(a==b) loz++;
		if(a*a+b*b==c*c) rec++;
	}
	cout << rec << endl;
	cout << loz << endl;
	return 0;
}