#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 2000000000
int main()
{
	char str[1001];
	char *p;
	fgets(str,sizeof(str),stdin);
	while(1)
	{
		if(strstr(str,"apple")==NULL)break;
		p=strstr(str,"apple");
		*p='t';
		*(p+1)='i';
		*(p+2)='n';
		*(p+3)='k';
		*(p+4)='o';
	}
	while(1)
	{
		if(strstr(str,"peach")==NULL)break;
		p=strstr(str,"peach");
		*p='a';
		*(p+1)='p';
		*(p+2)='p';
		*(p+3)='l';
		*(p+4)='e';
	}
	while(1)
	{
		if(strstr(str,"tinko")==NULL)break;
		p=strstr(str,"tinko");
		*p='p';
		*(p+1)='e';
		*(p+2)='a';
		*(p+3)='c';
		*(p+4)='h';
	}
	cout << str;
	return 0;
}