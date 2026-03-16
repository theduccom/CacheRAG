#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool FF[1000002];
int main(){

	for(int i=3;i<1000001;i+=2){FF[i]=true;
		for(int j=3;j*j<=i;j+=2)
			if(i%j==0){FF[i]=false;break;}
}
	FF[2]=true;
	int Q,M;
	while(1){
		cin>>Q>>M;if(Q==0&&M==0)break;

		int D[35]={};
		bool F[1000002];
		for(int i=0;i<Q;i++)
			cin>>D[i];
		int P=0;
		for(int i=0;i<=M;i++)
			F[i]=false;

		for(int i=0;i<Q;i++){
			for(int j=0;j<=M;j++)
			{
				
				if(j==D[i])F[j]=true;
				if(j-D[i]>0&&F[j-D[i]]==true)F[j]=true;
				if(F[j]==true&&FF[j]==true)P=j;
			}}
		if(P>0)cout<<P<<endl;
		else cout<<"NA"<<endl;
	}
	return 0;
}