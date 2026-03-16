#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main(){
	char a[1000];
	gets(a);
	for(int i=0;i<995;i++){
		if((a[i]=='a')&&(a[i+1]=='p')&&(a[i+2]=='p')&&(a[i+3]=='l')&&(a[i+4]=='e')){
			a[i]='p';
			a[i+1]='e';
			a[i+2]='a';
			a[i+3]='c';
			a[i+4]='h';
		}
		else if((a[i]=='p')&&(a[i+1]=='e')&&(a[i+2]=='a')&&(a[i+3]=='c')&&(a[i+4]=='h')){
			a[i]='a';
			a[i+1]='p';
			a[i+2]='p';
			a[i+3]='l';
			a[i+4]='e';
		}
	}
	cout << a <<"\n";
return 0;
}