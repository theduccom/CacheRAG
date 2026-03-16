#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	string in[50];
	getline(cin, in[0]);
	n = stoi(in[0]);
	for (int i = 0; i < n;i++) {
		getline(cin, in[i]);
		while (true) {
			int hoshi = in[i].find("Hoshino");
			if (hoshi >= 0) {
				in[i].replace(hoshi, 7, "Hoshina");
			}
			else break;
		}
	}
	for(int i = 0; i < n;i++){
		cout << in[i] << endl;
	}
	return 0;
}