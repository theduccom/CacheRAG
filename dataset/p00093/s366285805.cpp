#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int a, b, f = 0;
	
	while(1){
		cin >> a >> b;
		if(a == 0 && b == 0){
			break;
		}
		if(f == 1)cout << endl;
		
		for(f = 0; a <= b; a++){
			if(a%400 == 0 || (a%4 == 0 && a%100 != 0)){
				cout << a << endl;
				f = 1;
				a += 4;
				break;
			}
		}

		for(; a <= b; a += 4){
			if(a%400 == 0 || a % 100 != 0){
				cout << a << endl;
			}
		}
		
		if(f == 0){
			cout << "NA" << endl;
		}
		f = 1;
	}
	
	return 0;
}