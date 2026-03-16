#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
	int num,a=0,b=0,ab=0,o=0;
	char name[1024];
	while(scanf("%d,%s", &num, name) != EOF){
		string s(name);
		if(s=="A")++a;
		else if(s=="B")++b;
		else if(s=="AB")++ab;
		else if(s=="O")++o;
	}
	cout << a << "\n";
	cout << b << "\n";
	cout << ab << "\n";
	cout << o << "\n";
	return 0;
}