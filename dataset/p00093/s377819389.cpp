#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b;
	bool s = true;
	while(1){
		cin >> a >> b;
		if(a*b==0) break;
		if(s) s = false;
		else cout << endl;
		bool n = true;
		for(int i=a;i<=b;i++){
			bool c = false;
			if(i%400==0) c = true;
			else if(i%100==0);
			else if(i%4==0) c = true;
			if(c) cout << i << endl;
			if(c) n = false;
		}
		if(n) cout << "NA" << endl;
	}
}