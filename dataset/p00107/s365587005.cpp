#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
	int n;
	float s, t, a[3];
	
	while(1){
		cin >> a[0] >> a[1] >> a[2];
		if(a[0] == 0){
			break;
		}
		sort(a, a+3);
		cin >> n;
		s = sqrt((a[1]*a[1])+(a[0]*a[0]));
		s /= 2;
		for(int i = 0; i < n; i++){
			cin >> t;
			if(t > s){
				cout << "OK" << endl;
			} else {
				cout << "NA" << endl;
			}
		}
	}
	
	return 0;
}