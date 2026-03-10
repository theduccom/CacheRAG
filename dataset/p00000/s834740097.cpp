#include<stdio.h>

int main(){
	//defined var
	int i,j,ans;

	//looping first number
	for( j=1; j<=9; j++ ){
		//looping second number
		for( i=1; i<=9; i++ ){
			//calcurate answer
			ans = i * j ;

			//output result
			printf("%dx%d=%d\n", j, i, ans);
		}
	}

	return 0;
}