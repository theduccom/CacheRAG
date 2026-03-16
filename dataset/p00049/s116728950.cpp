#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
	int a,b,o,ab;
	a=0;b=0;o=0;ab=0;
	int n;
	char ty[5]={'e'};
	while(scanf("%d,%s",&n,ty)+1){
		if(ty[1] == 'B'){
			ab++;
		}else if(ty[0] == 'A'){
			a++;
		}else if(ty[0] == 'B'){
			b++;
		}else if(ty[0] == 'O'){
			o++;
		}
	}
	cout << a << endl;
	cout << b << endl;
	cout << ab << endl;
	cout << o << endl;
	return 0;
}