#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
#include <iomanip>
#include <vector>
#include <queue>
#include <set>

#define PI 3.14159265359

#define INF 1000000;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)

typedef long long ll;

using namespace std;


/*
class ElectronicPetEasy
{
public:
	string isDifficult(int st1, int p1, int t1, int st2, int p2, int t2)
	{
		
	}
};
*/




int main()
{
	int weight[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	int n;
	set<int> weights;
	
	
	while (cin >> n)
	{
		for (int i=9; i>=0; i--)
		{
			if (n >= weight[i])
			{
				weights.insert(weight[i]);
				n -= weight[i];
			}
		}
		bool first_flag = true;
		set<int>::iterator it = weights.begin();
		while (it != weights.end())
		{
			if (first_flag)
			{
				cout << *it;
				first_flag = false;
			} else {
				cout << " " << *it;
			}
			it++;
		}
		cout << endl;
		weights.clear();
	}
	
	return 0;
}