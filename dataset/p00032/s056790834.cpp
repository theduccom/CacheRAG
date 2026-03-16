#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int a,b,c,cho=0,his=0;
	while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
		if(a*a+b*b==c*c) cho++;
		else if(a==b) his++;
	}
	cout<<cho<<endl<<his<<endl;
	return 0;
}