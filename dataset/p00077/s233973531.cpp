#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	string str;
	while(cin >> str){
		for (int i = 0; i < str.size(); ++i)
		{
			if(str[i] == '@'){
				for (int j = 0; j < str[i + 1] - '0'; ++j)
				{
					cout << str[i + 2];
				}
				i += 2;
			}else{
				cout << str[i];
			}
		}
		cout << endl;
	}
}