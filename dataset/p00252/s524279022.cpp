#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int num = (1 << 2) * a + (1 << 1) * b + 1 * c;
	if(num == 6 || num == 1)puts("Open");
	else puts("Close");
	return 0;
}