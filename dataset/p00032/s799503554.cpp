#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<memory.h>
using namespace std;
int main(){
	int in;
	int a[3] = { 0 };
	int b=0, c=0;
	int l;
	bool flag = true;
	while (flag){
		l = 0;
		memset(a, 0, sizeof(a));
		while ((in = getchar()) != '\n'){
			if (in == EOF){ cout << b << endl << c << endl; return 0; }
			if (in == ',')l++;
			if (in != ','&&in>='0'&&in<='9'){
				a[l] = a[l] * 10 + (in - '0');		
			}
		}
		if (a[0] == a[1])
			c++;
		if (a[2] * a[2] == a[0] * a[0] + a[1] * a[1])
			b++;
	}
}