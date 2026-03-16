// 2010/12/22 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int n;
		cin >> n;
		if(n==0)
			break;

		int p_max = 0;
		int d_max = -1;
		for(int i=0; i<n; i++){
			int p, d1, d2;
			cin >> p >> d1 >> d2;
			if(d1+d2>d_max){
				p_max = p;
				d_max = d1+d2;
			}
		}

		cout << p_max << ' ' << d_max << endl;
	}

	return 0;
}