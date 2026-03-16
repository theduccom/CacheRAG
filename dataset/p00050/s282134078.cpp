#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	string peach, apple;
	peach = "peach";
	apple = "apple";
	getline(cin, s);
	for (int i = 0; i < s.size(); i++){
		if (s[i] == 'p'){
			int flag = 0;
			for (int i2 = i,j=0; i2 < i + 5; i2++,j++){
				if (peach[j] != s[i2]){
					flag = 1;
					break;
				}
			}
			if (!flag){
				for (int i2 = i,j=0; i2 < i + 5; i2++,j++){
					s[i2] = apple[j];
				}
			}
		}
		else if (s[i] == 'a'){
			int flag = 0;
			for (int i2 = i, j = 0; i2 < i + 5; i2++, j++){
				if (apple[j] != s[i2]){
					flag = 1;
					break;
				}
			}
			if (!flag){
				for (int i2 = i, j = 0; i2 < i + 5; i2++, j++){
					s[i2] = peach[j];
				}
			}
		}
	}
	cout << s << endl;
}