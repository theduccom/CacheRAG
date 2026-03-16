#include <iostream>
#include <math.h>
using namespace std;


void doIt(){
	int a,b,c,n,i;
	cin >> a >> b >> c;
	while(a + b + c > 0){
		cin >> n;
		int r[n];
		//cout << sqrt(a*a + b*b) / 2 << ", " << sqrt(b*b + c*c) / 2 << "," << sqrt(a*a + c*c) / 2;
		for(i = 0; i < n; i++){
			std::cin >> r[i];
			//斜辺を計算する
			bool bOK = false;
			if(sqrt(a*a + b*b) / 2 < r[i] || sqrt(b*b + c*c) / 2 < r[i] || sqrt(c*c + a*a) / 2 < r[i]){
				bOK = true;
			}
			if(bOK){
				cout << "OK" << endl;
			}
			else{
				cout << "NA" << endl;
			}
		}
		cin >> a >> b >> c;
	}
}

int main(){
doIt();
}