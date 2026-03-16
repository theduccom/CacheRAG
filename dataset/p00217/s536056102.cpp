#include <iostream>
using namespace std;

int main()
{
	int n;
	
	while (cin >> n, n){
		int p = 0, max = 0, max_n = 0, d1, d2;
		for (int i = 0; i < n; i++){
			cin >> p >> d1 >> d2;
			
			if(max < d1 + d2){
				max = d1 + d2;
				max_n = p;
			}
			
		}
		
		cout << max_n << ' ' << max << endl;
		
	}
	
	return (0);
}