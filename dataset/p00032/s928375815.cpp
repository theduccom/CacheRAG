#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int a, b, tai, p1=0, p2=0;
	while(scanf("%d,%d,%d",&a,&b,&tai)!=EOF){
		if(a*a+b*b==tai*tai)p1++;
		if(a==b)p2++;
	}
	cout<<p1<<endl<<p2<<endl;
	return 0;
}