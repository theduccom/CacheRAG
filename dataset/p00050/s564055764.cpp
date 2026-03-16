#include <bits/stdc++.h>
using namespace std;

char s[1024];
int n;

int main(){
	fgets(s,1024,stdin);
	n = strlen(s);	

	for(int i = 0; i < n-4;i++){
		if(s[i] == 'a' && s[i+1] == 'p' && s[i+2] == 'p' && s[i+3] == 'l' && s[i+4] == 'e'){
			s[i] = 'p';
			s[i+1] = 'e';
			s[i+2] = 'a';
			s[i+3] = 'c';
			s[i+4] = 'h';
			i += 3;
		}
		if(s[i] == 'p' && s[i+1] == 'e' && s[i+2] == 'a' && s[i+3] == 'c' && s[i+4] == 'h'){
			s[i] = 'a';
			s[i+1] = 'p';
			s[i+2] = 'p';
			s[i+3] = 'l';
			s[i+4] = 'e';
			i += 3;
		}
	}
	printf("%s",s);

	return 0;
}

