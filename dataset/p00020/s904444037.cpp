#include <iostream>

using namespace std;

int main()
{
	char str[256];
	cin.getline(str, sizeof(str));
	for(int i=0; i<sizeof(str); i++) str[i] -= (str[i] < 65) ? 0 : 32;
	printf("%s\n", str);
	
}