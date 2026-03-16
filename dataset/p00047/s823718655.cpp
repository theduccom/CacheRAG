#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	char in1, in2, now = 'A';
	while (scanf("%c,%c", &in1, &in2) != EOF){
		if (in1 == now)			now = in2;
		else if (in2 == now)	now = in1;
	}
	cout << now << endl;

	return 0;
}