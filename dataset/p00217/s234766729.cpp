#include<iostream>

using namespace std;

int main(){
	
	while(true){
		int n;
		cin >> n;
		if (n == 0) break;
		int max_p = 0,max_d = 0;
		for (int i = 0; i < n; i++){
			int p,d1,d2;
			cin >> p >> d1 >> d2;
			
			if(max_d <= d1 + d2){
				max_d = d1 + d2;
				max_p = p;
			}

		}
		cout << max_p << " " << max_d << endl;
	}
	
	return 0;
}