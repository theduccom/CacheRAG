#include <iostream>
#include <stdio.h>
using namespace std;

int swap(int& a, int& b){
	int c;
	c=a;a=b;b=c;
	return 1;
}

int main(){
	int cup[3] = {1,0,0};
	unsigned char s1='A', s2='A';

	while( ~scanf("%c,%c\n", &s1, &s2) ){
		swap( cup[s1-'A'] , cup[s2-'A'] ) ;
		
	}
	printf("%c\n", cup[0]*'A' + cup[1]*'B' + cup[2]*'C');
	

	return 0;
}