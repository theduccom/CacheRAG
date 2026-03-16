#include<iostream>
using namespace std;

int main(){
	int n, p, d1, d2;
	int max, max_p;
	while(cin >> n){
		if(n==0) break;
		cin >> p >> d1 >> d2;
		max = d1+d2;
		max_p = p;
		for(int i=1; i<n; i++){
			cin >> p >> d1 >> d2;
			if(max < d1+d2){
				max = d1+d2;
				max_p = p;
			}
		}
		cout << max_p << " " << max << endl;
	}
	return 0;
}
	
	
	
	
	