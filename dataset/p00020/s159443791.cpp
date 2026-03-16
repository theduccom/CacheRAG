#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){

char ch;

while(1){
	scanf("%c", &ch);
	if ( ch == '\n' ) break;
	char d=toupper(ch);
	cout<<d;
}
	cout<<endl;
}