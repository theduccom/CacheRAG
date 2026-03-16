#include <iostream>
using namespace std;

int main(void)
{
	double x1, y1, r1, x2, y2, r2;
	int n, res;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin>>x1>>y1>>r1>>x2>>y2>>r2;
		double d = ((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2));
		double sr = ((r1+r2) * (r1+r2));
		double dr = ((r1-r2) * (r1-r2));
		if (sr < d) cout << "0" << endl;
		else if (d < sr && dr < d) cout << "1" << endl;
		else if (d < dr){
			if (r2 < r1) cout << "2" << endl;
			else cout << "-2" << endl;
		}
		else cout << "1" << endl;
	}
	
	return 0;
}