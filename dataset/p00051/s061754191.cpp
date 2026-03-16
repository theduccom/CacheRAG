#include<string.h>
#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include <functional>
using namespace std;

int main(void){
	char buf[255];
	int num;
	int n;

	cin >> n;
	gets(buf);
	for(int i=0; i<n; i++){
		char str1[8],str2[8];
		gets(str1);

		strcpy(str2,str1);
		sort(&str1[0],&str1[8]);
		sort(&str2[0],&str2[8],greater<char>());
		
		num = atoi(str1) - atoi(str2);
		if(num<0) num*=(-1);

		cout << num << endl;
	}

	return 0;
}