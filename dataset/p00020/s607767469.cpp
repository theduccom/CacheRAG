#include<bits/stdc++.h>
using namespace std;

int main(){
	char ch;
	while(scanf("%c", &ch) != EOF){
		if(ch >= 'a' && ch <= 'z') ch = ch + ('A' - 'a');
		printf("%c", ch);
	}
}