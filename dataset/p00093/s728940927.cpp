#include <iostream>
using namespace std;
#define p(dis) cout << dis << endl

int func(int a, int b){
	int f = 1;
	for(int i = a;i <= b;i++){
		if(i % 4 == 0){
			if(i % 100 == 0){
				if(i % 400 == 0)p(i), f = 0;
				continue;
			}
			p(i), f = 0;
		}
	}
	return f;
}

int main(){
	int a, b, f = 0;
	while(cin >> a >> b, a+b){
		if(f)cout << endl;f = 1;
		if(func(a, b))cout << "NA" <<endl;
	}
	return 0;
}