#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	char str[100], c[1];
	int i, j, len, n;
	
	while(scanf("%s", str) != EOF){
		len = strlen(str);
		for(i = 0; i < len; i++){
			if(str[i] == '@'){
				c[0] = str[i+2];
				n = str[i+1] - '0';
				for(j = 0; j < n; j++){
					cout << c[0];
				}
				i += 2;
			}else {
				cout << str[i];
			}
		}
		cout << endl;
	}
	
	return 0;
}