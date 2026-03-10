#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;



int main()
{
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	
	int i,j;
	for(i=1;i<=9;i++)
		for(j=1;j<=9;j++)
			printf("%dx%d=%d\n",i,j,i*j);
	
	return 0;
}