#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
	int squ=0;
	int rho=0;
	int len1,len2,dia;
	while(scanf("%d",&len1)!=EOF){
		scanf(",%d,%d",&len2,&dia);
		if(len1==len2)rho++;
		if(hypot(len1,len2)==dia)squ++;
	}
	cout<<squ<<endl;
	cout<<rho<<endl;
	return 0;
}