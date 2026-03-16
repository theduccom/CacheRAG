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

#define rep(i, n) for(int i=0; i<n; i++)
#define REP(n) rep(i, n)

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
	int price, num, item_num = 0, sum = 0, num_sum = 0, average;
	
	while (scanf("%d,%d", &price, &num) != EOF)
	{
		sum += price * num;
		num_sum += num;
		//cout << "num_sum = " << num_sum << endl;
		item_num++;
	}
	average = 1.0 * num_sum / item_num + 0.5;
	
	cout << sum << endl << average << endl;
	
	return 0;
}