#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int shoujun(const void* a, const void* b){return *((int*)b)-*((int*)a);}
int koujun(const void* a, const void* b){return *((int*)a)-*((int*)b);}

int main()
{
	int line;
	cin >> line;
	for(int i=1;i<=line;i++)
	{
		char dataline[10];
		cin >> dataline;
		int dataset[10];		
		for(int j = 0; j<=7;j++)dataset[j] = (int)dataline[j]-48;
		
		qsort(dataset,8,sizeof(int),shoujun);
		int largest = 0;
		for(int j = 0; j<=7;j++)largest =((largest * 10) + dataset[j]);
		int smallest = 0;
		qsort(dataset,8,sizeof(int),koujun);
		for(int j = 0; j<=7;j++)smallest =((smallest * 10) + dataset[j]);
		cout << largest - smallest << endl;
	}
	return 0;
}