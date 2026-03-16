#include<iostream>
#include<vector>
using namespace std;

int main()
{
	double height,low;
	double input;
	vector<double> height_array;
	while (cin >> input) {
		height_array.push_back(input);
	}
	low = height = height_array[0];
	for (int i = 0;i < height_array.size();i++)
	{
		double temp;
		if (low >= height_array[i])
		{
			low = height_array[i];
		}
		if (height <= height_array[i]) {
			height = height_array[i];
		}

	}
	cout << height - low << endl;
	return 0;
}