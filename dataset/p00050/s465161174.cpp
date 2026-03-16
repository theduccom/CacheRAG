#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
	string n;
	getline(cin, n);
	for (int i = 0; i < n.size(); i++){
		if (n[i] == 'p'){
			if (n[i + 1] == 'e'){
				if (n[i + 2] == 'a'){
					if (n[i + 3] == 'c'){
						if (n[i + 4] == 'h'){
							n[i] = 'a';
							n[i + 1] = 'p';
							n[i + 2] = 'p';
							n[i + 3] = 'l';
							n[i + 4] = 'e';
							continue;
						}
					}
				}
			}
		}
		if (n[i] == 'a'){
			if (n[i + 1] == 'p'){
				if (n[i + 2] == 'p'){
					if (n[i + 3] == 'l'){
						if (n[i + 4] == 'e'){
							n[i] = 'p';
							n[i + 1] = 'e';
							n[i + 2] = 'a';
							n[i + 3] = 'c';
							n[i + 4] = 'h';
						}
					}
				}
			}
		}
	}
	cout << n << endl;
	return 0;
}
