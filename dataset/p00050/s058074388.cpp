#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char moji[1100], ansmoji[1100];
	bool first = false;

	while (cin >> moji){
		if (first != false){
			cout << " ";
		}
		else {
			first = true;
		}
		for (int i = 0; moji[i] != '\0'; i++){
			if (moji[i] == 'a' && moji[i + 1] == 'p' && moji[i + 2] == 'p' && moji[i + 3] == 'l' && moji[i + 4] == 'e'){
				moji[i] = 'p';
				moji[i + 1] = 'e';
				moji[i + 2] = 'a';
				moji[i + 3] = 'c';
				moji[i + 4] = 'h';
			}
			else if (moji[i] == 'p' && moji[i + 1] == 'e' && moji[i + 2] == 'a' && moji[i + 3] == 'c' && moji[i + 4] == 'h'){
				moji[i] = 'a';
				moji[i + 1] = 'p';
				moji[i + 2] = 'p';
				moji[i + 3] = 'l';
				moji[i + 4] = 'e';
			}
		}
		cout << moji;
	}
	cout << endl;
	return (0);
}