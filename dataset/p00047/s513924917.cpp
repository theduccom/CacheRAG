#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	int before,after;
	int cup[3]={1,0,0};
	while(cin >> s){
		if(s[0] == 'A'){
			before = 0;
		}else if(s[0] == 'B'){
			before = 1;
		}else if(s[0] == 'C'){
			before = 2;
		}

		if(s[2] == 'A'){
			after = 0;
		}else if(s[2] == 'B'){
			after = 1;
		}else if(s[2] == 'C'){
			after = 2;
		}

		swap(cup[before],cup[after]);
	}

	if(cup[0] == 1){
		cout << "A" << endl;
	}else if(cup[1] == 1){
		cout << "B" << endl;
	}else{
		cout << "C" << endl;
	}
}