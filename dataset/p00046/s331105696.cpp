#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	double m;
	double max, min;
	max = 0.0;
	min = 100000.0;
	int i = 0;
	while (cin >> m){
		if (max < m){
			max = m;
		}
		else if (min > m){
			min = m;
		}
	}
	cout << max - min << endl;
	
}