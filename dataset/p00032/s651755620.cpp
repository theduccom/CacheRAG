#include<iostream>
#include<string>
using namespace std;

int main(){
	string line;
	int a, b, c;
	int hishi=0, tyo=0;
	while(1){
		getline( cin, line );
		if( line.length() == 0 ){
			break;
		}
		sscanf( line.c_str(), "%d,%d,%d", &a, &b, &c );
		if( a==b ){
			hishi++;
		}else if( a*a + b*b == c*c ){
			tyo++;
		}
	}
	cout << tyo << endl;
	cout << hishi << endl;
	return 0;
}