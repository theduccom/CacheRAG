#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;


int main() {
	
	double a;
	double maxt = 0;
	double mint = 99999999;
	
	while( cin >> a)
	{
			maxt = max(maxt, a);
			mint = min(mint, a);	
	}

	cout << fixed << setprecision(6) << maxt - mint << "\n";
	
	
	return 0;
}
