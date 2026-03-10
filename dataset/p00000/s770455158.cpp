#include<iostream>
#include<cstdlib>
#include<cstring>
#include<stack>
#include<queue>
#include<algorithm>
#include<vector>
#include<math.h>
#include<bitset>
using namespace std;

typedef stack<int> IntStack;
typedef queue<int> IntQueue;

/*ここまでテンプレ*//*ここまでテンプレ*//*ここまでテンプレ*//*ここまでテンプレ*/



int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for(int j=1;j<=9;j++)
			cout << i << "x" << j << "=" << i * j << endl;
	}

	return 0;
}

