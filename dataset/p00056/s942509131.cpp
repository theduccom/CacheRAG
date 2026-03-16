#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool F[50005];
int main(){
	for(int i=3;i<=50002;i+=2){F[i]=true;
		for(int j=3;j*j<=i;j+=2)
			if(i%j==0)F[i]=false;
	}
	F[2]=true;

	int n;
	while(1){
		cin>>n;if(n==0)break;
		int c=0;int P=n/2;

		for(int i=2;i<=P;i++)
		{if(F[i]==true&&F[n-i]==true)c++;}
		cout<<c<<endl;
	}
	return 0;
}