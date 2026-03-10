#include<iostream>
#include<stdio.h>


using namespace std;

int main()
{
	int x;
	int i,j;

	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
			x = i*j;
			cout << i << 'x' << j << '=' << x << endl;
		}
	}	
}