#include <iostream>
using namespace std;

int func(int a){return (!(a%4))-(!(a%100))+(!(a%400));}

int main(){
	int a, b, f = 0;
	while(cin >> a >> b, a+b){
		if(f)cout << endl;f = 1;
		int u = 1;
		for(int i = a;i <= b;i++){
			if(func(i))cout << i << endl, u = 0;
		}
		if(u)cout << "NA" << endl;
	}
	return 0;
}