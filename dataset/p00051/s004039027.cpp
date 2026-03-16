#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
int N;
string K;
int NN=0;
cin>>N;
for(int ii=0;ii<N;ii++){
cin>>K;

char ch;
int NUM[11]={};
for(int i=0;i<(int)K.size();i++){
	ch=K[i];int t=ch-'0';NUM[t]++;}
	long H=10000000, h=0;
	long P=10000000,p=0;
	for(int i=9;i>=0;i--){
	NN=NUM[i];
for(int j=NUM[i];j>0;j--){
	h+=H*i;H=H/10;//printf("%lf\n",h);
}}
	for(int i=0;i<=9;i++){
	NN=NUM[i];
for(int j=NUM[i];j>0;j--){
	p+=P*i;P=P/10;
	

//	cout<<" "<<NUM[i]<<" "<<i<<endl;
	
}
}
	printf("%ld\n",h-p);
	
}
/*
for(int i=0;i<10;i++){
	cout<<NUM[i]<<" "<<i<<endl;}
cout<<K<<endl;
*/


return 0;
}