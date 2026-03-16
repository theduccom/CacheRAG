#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	char x,y,now='A';
	while(scanf("%c,%c",&x,&y)>0){
		if(now==x) now=y;
		else if(now==y) now=x;
	}
	cout<<now<<endl;
	return 0;
}