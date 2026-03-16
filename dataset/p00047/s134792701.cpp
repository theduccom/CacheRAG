#include<iostream>
using namespace std;

int main(){
	int b[3] = {1,0,0};
	char input[3];

	while(cin >> input){
			int num = b[ input[0] - 'A' ];
			b[ input[0] - 'A' ] = b[ input[2] - 'A' ];
			b[ input[2] - 'A' ] = num;
		}
		if(b[0] == 1)
			cout << 'A' << endl;
		if(b[1] == 1)
			cout << 'B' << endl;
		if(b[2] == 1)
			cout << 'C' << endl;
}