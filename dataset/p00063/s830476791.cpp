#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char s[110];
	int cnt = 0;
	 while(cin >> s) {
	int i = 0, j = strlen(s) - 1;
	for(i = 0; i <= j; i++,j--)
		if(s[i] != s[j]) break;
		if(i > j) cnt++;
		}
	cout << cnt << endl;
	return 0;
}