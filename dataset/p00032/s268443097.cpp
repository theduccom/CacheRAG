//0032
#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	int tyo = 0,hishi = 0;
	while(scanf("%d,%d,%d\n",&a,&b,&c) != EOF){
		if(a*a+b*b == c*c)
			tyo++;
		if(a == b)
		 	hishi++;
	}
	cout<<tyo<<endl;
	cout<<hishi<<endl;

	return 0;
}