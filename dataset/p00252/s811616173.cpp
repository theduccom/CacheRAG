#include<iostream>
#include<cstdio>
using namespace std;
int A, B, C;
bool ans;
int main()
{
	cin >> A >> B >> C;
	if (C == 1 || (A == 1 && B == 1))ans = true;
	else ans = false;
	if (ans)printf("Open\n");
	else printf("Close\n");
	return 0;
}