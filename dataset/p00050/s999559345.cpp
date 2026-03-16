#include<iostream>
#include<string>
using namespace std;

int main(){
	string snt;
	int c;

	string temp = "@+-*~";
	string w = "peach";

	getline(cin, snt);

	while ((c = snt.find("peach")) != -1){
		for (int i = c; i < c + 5; ++i){
			snt[i] = temp[i - c];
		}
	}

	while ((c = snt.find("apple")) != -1){
		for (int i = c; i < c + 5; ++i){
			snt[i] = w[i-c];
		}
	}
	w = "apple";

	while ((c = snt.find(temp)) != -1){
		for (int i = c; i < c + 5; ++i){
			snt[i] = w[i - c];
		}
	}


	cout << snt << endl;

	return 0;
}