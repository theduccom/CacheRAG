#include <iostream>
using namespace std;

bool uruu[3000] = {};

void is_uruu(){
	for(int i = 0;i < 3000;i++){
		if(i % 4 == 0){
			if(i % 100 == 0){
				if(i % 400 == 0) uruu[i] = true;
				else uruu[i] = false;
			}
			else uruu[i] = true;
		}
	}
}

int main(){
	int a,b;
	is_uruu();
	bool start = false;
	while(cin >> a >> b,a){
		if(!start) start = true;
		else cout << endl;
		bool flag = false;
		for(int i = a;i <= b;i++){
			if(uruu[i]){
				flag = true;
				cout << i << endl;
			}
		}
		if(!flag) cout << "NA" << endl;
	}
	return 0;
}