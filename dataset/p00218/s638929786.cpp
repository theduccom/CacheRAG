#include <iostream>
using namespace std;

int main(){
	int n;
	char s[10000];
	int pm, pe, pj;
	int sum;
	
	for(;;){
		for(int i = 0; i < 10000; i++) s[i] = 0;
		sum = 0;
		cin >> n;
		if(n == 0) break;
		for(int i = 0; i < n; i++){
			cin >> pm >> pe >> pj;
			sum = pm + pe + pj;
			if(pm == 100 || pe == 100 || pj == 100) s[i] = 'A';
			else if((pm + pe) / 2 >= 90) s[i] = 'A';
			else if(sum / 3 >= 80) s[i] = 'A';
			else if(sum / 3 >= 70 && sum / 3 < 80) s[i] = 'B';
			else if(sum / 3 >= 50 && (pm >= 80 || pe >= 80)) s[i] = 'B';
			else s[i] = 'C';
		}
		for(int i = 0; i < n; i++){
			cout << s[i] << endl;
		}
	}
	
	return 0;
}		