#include <bits/stdc++.h>
using namespace std;

int main() {
	int cups[3] = {0};
	cups[0] = 1;
	char c[5];
	while(scanf("%s", c) != EOF){
		int l = c[0] - 'A', r = c[2] - 'A';
		swap(cups[l], cups[r]);
	}
	for(int i = 0; i < 3; ++i){
		if(cups[i]){
			printf("%c\n", i + 'A');
			break;
		}
	}
	return 0;
}