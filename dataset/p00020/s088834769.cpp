#include <iostream>
#include <string>
using namespace std;

int main(){
	int a;
	string input, output;
	getline(cin, input);
	for(int i=0;i<input.size();i++){
		a = input[i];
		if (a > 96){
			a -= 32;
		}
		output += a;
	}
	cout << output << endl;
	return 0;
}