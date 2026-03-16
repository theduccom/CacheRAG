#include<iostream>
#include<algorithm>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
	int c,n;
	string s;
	string ho="Hoshino";
	cin >> n;
	for (int r = 0; r <= n; r++){
		s.clear();
		while ((c = getchar()) != '\n'){
			s += c;
		}
		for (int i = 0; i < s.size(); i++){
			int flag = 0;
			if (s[i] == 'H'){
				for (int i2 = 0; i2 < ho.size(); i2++){
					if (s[i + i2] != ho[i2]){
						flag = 1;
						break;
					}
				}
				if (flag == 0){
					s[i + ho.size() - 1] = 'a';
				}
			}
		}
		if (r != 0){
		cout << s << endl;
		}
	}
}