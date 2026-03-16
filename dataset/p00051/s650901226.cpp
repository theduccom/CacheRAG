#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int shoujun(const void* a, const void* b){return *((char*)b)-*((char*)a);}
int koujun(const void* a, const void* b){return *((char*)a)-*((char*)b);}

int main()
{
	int line;
	cin >> line;
	for(int i=1;i<=line;i++)
	{
		char dataline[10];
		cin >> dataline;
		
		qsort(dataline,8,sizeof(char),shoujun);
		int largest = atoi(dataline);
		qsort(dataline,8,sizeof(char),koujun);
		int smallest = atoi(dataline);
		cout << largest - smallest << endl;
	}
	return 0;
}