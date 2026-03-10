#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <queue>
#include <map>
#include <stack>
#include <list>
#include <vector>
using namespace std;
int main()
{
	for(int i=1;i<=9;i++)
		for(int j=1;j<=9;j++)
		{
			cout<<i<<"x"<<j<<"="<<i*j<<endl;
		}
	return 0;
}