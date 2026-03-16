#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int main(){
	string x;
	int i;
	while(getline(cin, x)){
		for(i = 0;i < x.size();i++){
			if(x[i] >= 'a' && x[i] <= 'a' + 25){
				x[i] = 'A' + (x[i] - 'a');
			}
		}
		cout << x << endl;
	}

	return 0;
}