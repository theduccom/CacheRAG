#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	for(int j = 0; j < n; ++j)
	{
		string numA;
		string numB;
		cin >> numA >> numB;
		
		while(numA.size() != numB.size())
		{
			if(numA.size() < numB.size())
			{
				numA = "0" + numA;
			}
			else
			{
				numB = "0" + numB;
			}
		}
		
		numA = "0" + numA;
		numB = "0" + numB;
		
		for(int i = numA.size() - 1; i >= 0; --i)
		{
			int sum = 0;
			sum = (numA[i] - '0') + (numB[i] - '0');
			
			if(sum >= 10)
			{
				sum -= 10;
				numA[i - 1] += 1;
			}
			
			numA[i] = sum + '0';
		}
		
		if(numA.size() > 81)
		{
			cout << "overflow" << endl;
			continue;
		}
		if(numA.size() == 81 && numA[0] != '0')
		{
			cout << "overflow" << endl;
			continue;
		}
		
		for(int i = 0; i < numA.size(); ++i)
		{
			if(i == 0 && numA[i] == '0') continue;
			cout << numA[i];
		}
		
		cout << endl;
	}
	return 0;
}