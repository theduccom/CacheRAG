#include <iostream>
using namespace std;
int main(void)
{
	char c[5];
	char n[] = "A";
	while(cin>>c){
		if(c[0]==n[0]) n[0] = c[2];
		else if( c[2] == n[0] ) n[0] = c[0];
	}
	putchar(n[0]);
	putchar('\n');
	return 0;
}