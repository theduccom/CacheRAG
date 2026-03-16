#include<string>
#include<iostream>
using namespace std;
int main() {
	string str;
	int count = 0;
	while (cin >> str) {
		bool b = true;
		int g = str.size();
		if (g % 2 == 0) {
			for (int i = 0; i < g; i++){
				if (str[i] != str[g - 1 - i])
					b = false;
			}
			if (b != false)count++;
		}
		else{
			if (g == 1){
				count++;
			}
			else{
				for (int i = 0; i < g; i++){
					if (str[i] != str[g - i - 1])b = false;
				}
				if (b != false)count++;
			}
		}
	}
	cout << count << endl;
}