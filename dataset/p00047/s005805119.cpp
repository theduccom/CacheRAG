#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

	int a,b,c;
	char s1,s2;

	//scanf("%d,%d",&s1,&s2);

	a = 1;
	b = 0;
	c = 0;

	while(scanf("%c,%c",&s1,&s2) != EOF){

		//if(s1 == 'z' && s2 == 'z') break;

		if((s1 == 'A' && s2 == 'B' && a == 1 && b == 0) ||
		 (s1 == 'B' && s2 == 'A' && a == 1 && b == 0)){
			b = 1;
			a = 0;
		}else if((s1 == 'A' && s2 == 'C' && a == 1 && c == 0) ||
				(s1 == 'C' && s2 == 'A' && a == 1 && b == 0)){
			a = 0;
			c = 1;
		}else if((s1 == 'B' && s2 == 'C' && b == 1 && c == 0) ||
				(s1 == 'C' && s2 == 'B' && b == 1 && c == 0)){
			b = 0;
			c = 1;
		}else if((s1 == 'B' && s2 == 'C' && b == 0 && c == 1) ||
				(s1 == 'C' && s2 == 'B' && b == 0 && c == 1)){
			b = 1;
			c = 0;
		}else if((s1 == 'A' && s2 == 'B' && a == 0 && b == 1) ||
		 (s1 == 'B' && s2 == 'A' && a == 0 && b == 1)){
			a = 1;
			b = 0;
		}
	}

	if(a == 1){
		cout << 'A' << endl;
	}else if(b == 1){
		cout << 'B' << endl;
	}else if(c == 1){
		cout << 'C' << endl;
	}

	return 0;
}