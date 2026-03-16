#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	char c='A',x,y;
	while(scanf("%c,%c",&x,&y)!=EOF){
		if(c==x){c=y;continue;}
		if(c==y)c=x;
	}
	cout<<c<<endl;
}