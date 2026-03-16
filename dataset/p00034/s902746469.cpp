#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>

//#define PI 3.141592653589

using namespace std;



int main()
{
	int l[10];
	int v[2];
	int sum;
	double point;	//すれ違う地点
	int sum2;	//計算に使う駅間の距離の合計
	
	while (scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",
	&l[0], &l[1], &l[2], &l[3], &l[4], &l[5], &l[6], &l[7], &l[8], &l[9], &v[0], &v[1]) != EOF)
	{
		sum = 0;
		sum2 = 0;
		for (int i=0; i<10; i++) sum += l[i];
		//cout << "sum = " << sum << endl;
		point = 1.0 * sum * v[0] / (v[0] + v[1]);
		//cout << "point = " << point << endl;
		for (int i=0; i<10; i++)
		{
			sum2 += l[i];
			if (sum2 >= point)
			{
				cout << i+1 << endl;
				break;
			}
		}
	}
	
	return 0;
}