#include <iostream>
using namespace std;

bool isleapyear(int year){
	if(year%400==0){
		return true;
	}else if(year%100==0){
		return false;
	}else if(year%4==0){
		return true;
	}
	return false;
}

int main(void){
	int a,b;
	bool f = false;
	while(cin >> a >> b){
		if(a==0&&b==0)break;
		if(f) cout << "\n";
		f = true;
		bool na = false;
		for(int i=a;i<=b;i++){
			if(isleapyear(i)){
				cout << i << "\n";
				na = true;
			}
		}
		if(!na)cout << "NA\n";
	}
	return 0;
}