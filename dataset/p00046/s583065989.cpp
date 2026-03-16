#include <iostream>
using namespace std;

int main()
{
	double mountain;
	cin >> mountain;
	double high=mountain,low=mountain;
	while(cin >> mountain){
		high = max(high,mountain);
		low = min(low,mountain);
	}
	cout << high - low << endl;
	return 0;
}