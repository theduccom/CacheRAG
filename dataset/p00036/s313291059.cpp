#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int s[8], count, f;
	while(cin >> s[0]){
		count = 0;
		for (int i = 1; i < 8; i++){
			cin >> s[i];
		}

		for (int i = 0; i < 8; i++){
			if (s[i] > 0) count++;
		}
	
		if (count == 4) cout << "B" << endl;
		else if (count == 1) cout << "C" << endl;
		else if (count == 3) {
			for (int i = 0; i < 8; i++){
				if (s[i] > 0){
					if (s[i] < s[i + 2]) cout << "D" << endl;
					else cout << "F" << endl;
					i = 9;
				}
			}
		}
		else if (count == 2){
			for (int i = 0; i < 8; i++){
				if (s[i] > 0){
					if (s[i] == s[i + 1]) cout << "A" << endl;
					else if (s[i] > s[i + 1]) cout << "E" << endl;
					else cout << "G" << endl;
					i = 9;
				}
			}
		}
	}
	return (0);
}