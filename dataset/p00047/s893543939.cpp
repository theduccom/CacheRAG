#include <iostream>
#include <string>

using namespace std;

string str;
int t[3];
int p;
int main() {
	t[0] = 1;
	t[1] = t[2] = 0;
	while(cin >> str){
		if(str == "A,B"){
			p = t[0];
			t[0] = t[1];
			t[1] = p;
		}else if(str == "B,A"){
			p = t[0];
			t[0] = t[1];
			t[1] = p;
		}else if(str == "A,C"){
			p = t[0];
			t[0] = t[2];
			t[2] = p;
		}else if(str == "C,A"){
			p = t[0];
			t[0] = t[1];
			t[1] = p;
		}else{
			p = t[0];
			t[0] = t[1];
			t[1] = p;
		}
	}
	if(t[0]){
		cout << 'A' << endl;
	}else if(t[1]){
		cout << 'B' << endl;
	}else{
		cout << 'C' << endl;
	}	
	return 0;
}