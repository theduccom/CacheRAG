#define scanf_s scanf
#define gets_s gets
#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
#define MIN 39
#define MAX 150
int main(void)
{
	char c[3];
	int A = 0, B = 0, AB = 0, O = 0, x;
	while (scanf_s("%d,", &x) != EOF) {
		gets_s(c);
		if (c[0] == 'A' && c[1] == 'B') ++AB;
		else if (c[0] == 'A') ++A;
		else if (c[0] == 'B') ++B;
		else if (c[0] == 'O') ++O;
	}
	printf("%d\n%d\n%d\n%d\n", A, B, AB, O);
}