#include "iostream"
using namespace std;

int main(){
	int a;
	while(cin >> a){
		if(a == 0) break;
		int count = 0;
		for(int i = 1; i <= a; i ++){
			int buf = i;
			while(buf % 5 == 0 ){
				buf /= 5;
				count ++;
			}
		}
		cout << count << endl;
	}
	return 0;
}