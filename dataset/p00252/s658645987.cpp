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
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a+b+c==2 || c==1)puts("Open");
	else if(a+b+c==0)puts("Close");
	else puts("Close");

	return 0;
}