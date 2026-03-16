#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	int no, cnta = 0, cntb = 0, cnto = 0, cntab = 0;
	char blo[256];
	while(scanf("%d,%s", &no, blo) != EOF){
		if(strcmp(blo, "A") == 0) cnta++;
		else if(strcmp(blo, "B") == 0) cntb++;
		else if(strcmp(blo, "O") == 0) cnto++;
		else if(strcmp(blo, "AB") == 0) cntab++;
	}
	cout <<cnta <<endl <<cntb <<endl <<cntab <<endl <<cnto <<endl;
	return 0;
}