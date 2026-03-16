#include<iostream>
#include<cstdio>
#include <cstring>
#include<map>
#include<string>
#include<stack>
#include <sstream>
#include<vector>
using namespace std;


int main(){
	int n;
	while(cin>>n)
	{
		if(n==0)break;
		while(n--)
		{
			int ei,suu,koku;
			cin>>suu>>ei>>koku;
			if( suu==100 || ei==100 || koku==100 ) puts("A");
			else if( (suu+ei)/2 >= 90 ) puts("A");
			else if( (suu+ei+koku)/3 >=80 ) puts("A");
			else if( (suu+ei+koku)/3 >=70 ) puts("B");
			else if( (suu+ei+koku)/3 >=50  && (suu>=80 || ei>=80 ) ) puts("B");
			else puts("C");
		}
	}
	return 0;
}