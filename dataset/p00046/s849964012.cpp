#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	double takasa;
	double ans;
    vector<double>  data;


	while(cin >> takasa)
	{
		data.push_back(takasa);
	}

	stable_sort(data.begin(), data.end());

	ans = data.back() - data.front();

	cout << ans << endl;

	return 0;

}