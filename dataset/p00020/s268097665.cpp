#include <iostream>
#include <cctype>
#include <cstdio>
using namespace std;
int main(){
	char c;
	while(scanf("%c",&c)!=EOF){
		if(islower(c)) c = toupper(c);
		cout << c;
	}
}