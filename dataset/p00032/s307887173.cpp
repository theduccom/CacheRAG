#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int sides[3]; int tyoho = 0, para = 0;
	while (scanf("%d,%d,%d", &sides[0], &sides[1], &sides[2]) != EOF) {
		//????????¢???check
		if (sides[0] * sides[0] + sides[1] * sides[1] == sides[2] * sides[2]) {
			tyoho++;
		}
		//??????????????¢???check
		else if (sides[0] == sides[1]) {
			para++;
		}
	}
	cout << tyoho << endl << para << endl;
}