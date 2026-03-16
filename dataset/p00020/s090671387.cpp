#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main(){
	char mes[256];
	cin.getline(mes,256);
	int i;
	for(i=0;i<strlen(mes);i++)
		mes[i]=toupper(mes[i]);
	printf("%s\n",mes);
}