#include<stdio.h>
#include<iostream>
#include<string>
#include<math.h>
using namespace std;

bool G[80001]={};

int main(){
	
	for(int i=3;i<80000;i+=2){G[i]=true;
		for(int j=3;j*j<=i;j++)
			if(i%j==0){G[i]=false;break;}
	}
	G[2]=true;
	int N;
	while(cin>>N){
	
		for(int i=N-1;i>0;i--)
			if(G[i]==true){cout<<i;
		break;
		}
		cout<<" ";
		for(int i=N+1;i<80000;i++)
			if(G[i]==true){cout<<i<<endl;
		break;
		}
	}
	return 0;
}