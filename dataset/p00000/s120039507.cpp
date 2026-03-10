#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(void){
	int i,j;

	for(i=1;i<10;i++){
		for(j=1;j<10;j++){
			std::cout << i << "x" << j << "=" << i*j << "\n";
		}
	}
	return 0;
}