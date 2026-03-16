#include <iostream>
#include <algorithm>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	int n,a=0,b=0,c=0,o=0,x,y,z,w;
	char s[3];
	while(scanf("%d,%s",&n,s)!=EOF){
		if(s[1]=='B')c++;
		else if(s[0]=='A')a++;
		else if(s[0]=='B')b++;
		else o++;
	}
	cout<<a<<endl<<b<<endl<<c<<endl<<o<<endl;
}