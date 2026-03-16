#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int a, b, c;
	int r = 0;
	int l = 0;
	while (scanf("%d,%d,%d", &a, &b, &c) != EOF ) {
		if (a*a + b*b == c*c) {//??´?§?????§???¢
			r++;
		}
		else if (a == b) {//?????????????§???¢
			l++;
		}
	}
	cout << r << endl;
	cout << l << endl;
	
    return 0;
}