#include <iostream>
using namespace std;

#define REP(i, b, n) for (int i = (b); i < (n); i++)
#define rep(i, n) REP(i, 0, n)

int main()
{
	REP(j, 1, 10)
		REP(i, 1, 10)
			printf("%dx%d=%d\n", j, i, j*i);
	return 0;
}