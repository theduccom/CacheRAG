#include<iostream>
#include<cstring>
#include<cstdio>

int main(void){
	int nA = 0, nB = 0, nO = 0, nAB = 0;
	while( 1 ){
		int id;
		char bloodType[4] = "";
		
		if( 2 != scanf("%d,%s%*c", &id, bloodType) ) break;

		if( strcmp(bloodType, "A") == 0 ) nA++;
		else if( strcmp(bloodType, "B") == 0 ) nB++;
		else if( strcmp(bloodType, "AB") == 0 ) nAB++;
		else if( strcmp(bloodType, "O") == 0 ) nO++;
	}
	printf("%d\n%d\n%d\n%d\n",
		nA,
		nB,
		nAB,
		nO);
	return 0;
}