#include<iostream>
#include<cstdio>
using namespace std;
int main(void){
	int a,b,c;
	int tyou=0,hisi=0;
	while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
		if(a*a+b*b==c*c)
			tyou++;
		if(a==b)
			hisi++;
	}
	cout<<tyou<<endl<<hisi<<endl;

	return 0;
}