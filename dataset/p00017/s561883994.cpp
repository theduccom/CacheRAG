#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string.h>
#include <queue>
#include <stack>
#include <utility>
#include <queue>
#define mp make_pair
#define pii pair<int,int> 
#define ff first
#define ss second

using namespace std;

char a[1000];
int b,c;

int main()
{
	while(fgets(a,999,stdin) != NULL)
	{
		c=0;
		while(true)
		{
			if(strstr(a,"this")!=NULL||strstr(a,"the")!=NULL||strstr(a,"that")!=NULL)break;
			for(b=0;a[b]!='\0';b++)
			{
				if(islower(a[b]))
				a[b]++;
				if(a[b]>122)
				a[b]=97;
			}
			c++;
			if(c>27)
			break;
		}
		printf("%s",a);
	}
	return 0;
}