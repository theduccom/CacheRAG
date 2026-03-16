#include <iostream>
#include <string>
using namespace std;


int n, X, Y;
string mes[9];

int bomb(int a, int b){
	if( a < 1 || a > 8 || b < 0 || b > 7){
		return 0;
	}
	else{
		if (mes[a][b] == '1') {
			mes[a][b] = '0';
			bomb(a-1,b );
			bomb(a-2, b);
			bomb(a-3, b);
			bomb(a+1, b);
			bomb(a+2, b);
			bomb(a+3, b);
			bomb(a, b-1);
			bomb(a, b-2);
			bomb(a, b-3);
			bomb(a, b+1);
			bomb(a, b+2);
			bomb(a, b+3);
			return 0;
		}
		else{
			return 0;
		}
	}
}

int main(){
	cin >> n;
	for(int z=1;z<n+1;z++){
		for(int k = 1;k<9;k++){
			cin >> mes[k];
		}
		cin >> X >> Y;
		bomb(Y, X-1);
		cout << "Data " << z << ":" << endl;
		for(int e=1;e<9;e++){
			cout << mes[e] << endl;
		}
	}
	return 0;
}