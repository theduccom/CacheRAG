#include<iostream>
#include<string>
using namespace std;
int main() {
	string c;
	int a;
	while (cin >> c){
		for (int i = 0; i != c.size(); i++){
			if (c[i] == '@'){
				a = c[i + 1] - '0';
				for (int j = 0; j < a; j++) {
					cout.put(c[i + 2]);
				}
				i++;
				i++;
			}
			else cout.put(c[i]);
			
		}
		cout << endl;
	}
}