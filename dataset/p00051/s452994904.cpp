#include<iostream>
#include<vector>
#include<algorithm>
#include <cmath>
#include <cctype>
using namespace std;

#define N 8

int main()
{
	vector<int> nums(N);
	int n, i;
	int j;
	int difference;
	char c;

	cin>>n;
	for (i = 0; i < n; i++) {
		j = 0;
		while (j < N) {
			cin.get(c);
 			if ( isdigit(c) ) nums[j++] = c-'0';
		}

		difference = 0;
		sort(nums.begin(), nums.end());
		for (j = 0; j < N; j++)
			difference += nums[j] * (int)pow(10.0, j);
		sort(nums.begin(), nums.end(), greater<int>());
		for (j = 0; j < N; j++)
			difference -= nums[j] * (int)pow(10.0, j);

		cout<<difference<<endl;
	}

	return 0;
}