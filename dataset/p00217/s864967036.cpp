#include <iostream>
using namespace std;
int main()
{

	while(true){

		int n;
		int p,d1,d2;
		int max = 0,pmax = 0;
		
		cin >> n;
		if(n==0)
			break;

		for(int i=0 ;i<n ;i++){

			cin >> p >> d1 >> d2;

			if(i==0){
				max = d1 + d2;
				pmax = p;
			}
			else if(max < (d1 +d2)){
				max = d1 + d2;
				pmax = p;
			}
		}

		cout << pmax  << ' ' << max << endl;
	}
	return 0;
}