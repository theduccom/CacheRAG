#include <iostream>
using namespace std;
int main(){
	int n1,n2;
	bool g = false;
	while(cin >> n1 >> n2){
		if(!(n1&&n2)) break;
		if(g) cout << endl;
		g = true;
		bool f = false;
		for(int year=n1; year<=n2; year++){
			if(year%400==0 || (year%4==0&& year%100!=0) ){
				f = true;
				cout << year << endl;
			}
		}
		if(!f) cout << "NA" << endl;
		
	}
	return 0;
}