#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x,y,z;
	while(cin >> x >> y >> z){
		double r = min(sqrt(x*x+y*y),min(sqrt(y*y+z*z),sqrt(z*z+y*y)));
		if(!r)
			break;
		int n;
		cin >> n;
		for(int i=0;i<n;i++){
			double R;
			cin >> R;
			R += R;
			if(R > r)
				cout << "OK" << endl;
			else
				cout << "NA" << endl;
		}
	}
	return 0;
}