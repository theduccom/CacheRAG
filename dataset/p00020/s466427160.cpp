#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	char s[1000];

	while(gets(s) != NULL){

		int len = strlen(s);

		for(int i = 0;i < len;i++){
			if(s[i] >= 'a' && s[i] <= 'z'){
				s[i] -= 32;
			}
		}
	cout << s << endl;
	}
}