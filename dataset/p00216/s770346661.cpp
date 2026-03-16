#include <iostream>

using namespace std;

int main(void){
	int w;
	while(cin >> w && w != -1){
		if(w<=10){
			cout << 3130 << endl;
		}else if(w <= 20){
			cout << 4280 - (1150+125*(w-10)) << endl;
		}else if(w <= 30){
			cout << 4280 - (1150+1250+140*(w-20)) << endl;
		}else{
			cout << 4280 - (1150+1250+1400+160*(w-30)) << endl;
		}
	}
}