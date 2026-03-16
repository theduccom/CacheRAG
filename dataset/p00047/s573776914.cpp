#include <iostream>
#include <string>
using namespace std;

int main(){
	char ball = 'A';
	string c;
	
	while(cin >> c){
		if(c[0] == ball){
			ball = c[2];
		}
		else if(c[2] == ball){
			ball = c[0];
		}
	}
	
	cout << ball << endl;
	return 0;
}