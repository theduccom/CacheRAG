#include <iostream>
#include <string>
using namespace std;

int main() {
	string angou;
	while(getline(cin, angou)) {
		while(1) {
			if(angou.find("the") != -1 || angou.find("this") != -1 || angou.find("that") != -1) break;
			else {
				for(int i = 0; i < angou.size(); i++) {
					if(angou[i] == ' ' || angou[i] == '.') continue;
					else angou[i]++;
					if(angou[i] == 'z'+1) angou[i] = 'a';
//					cout << angou[i] << endl;
				}
			}
		}
		cout << angou << endl;
	}
	return 0;
}