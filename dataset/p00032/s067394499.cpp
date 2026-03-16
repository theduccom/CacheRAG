#include <iostream>

using namespace std;

int main(){
	int a, b, c;
	char d;
	int cho=0;
	int hi=0;

	while(cin >> a >> d >> b >> d >> c){


		if(a*a + b*b == c*c){
			cho++;
		}
		else if(a == b){
			hi++;
		}
	}
	cout << cho << endl << hi << endl;

}