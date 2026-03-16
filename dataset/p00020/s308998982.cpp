#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdio>
using namespace std;
int main()
{
	string s;
    getline(cin,s);
	for(int i=0;i<s.size();i++){
		char c=s[i];
		(97<=c&&c<=122)?printf("%c",c-32):printf("%c",c);
	}
	cout<<endl;
    return 0;
}