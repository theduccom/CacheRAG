#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include <numeric>
#include <vector>
#include <iostream>

using namespace::std;

int main(void)
{

  for(int i = 1; i <= 9; i++)
    {
      for(int j = 1; j <= 9; j++)
	{
	  cout << i << "x" << j << "=" << i * j << endl;
	}
    }

  return 0;
}