#include<iostream>
#include <cstdio>
#include<string>
#include<math.h>
using namespace std;
//int ha(string);
//int saga(int);
int q,m,n=1000000,List[1000];
bool  slist[1000001];
bool  klist[1000001];

int main()
{	
	int i,j,k,b=0,s,a=2,f=0,c=0;
	for( i = 0; i <n;i++ ){
		slist[i]=true;
		klist[i]=false;
	}

	i=0;
	while(i<sqrt((double)n)){
		for(i=a+a;i<n;i=i+a){
			slist[i]=false;
		}
		for(i=a+1;i<sqrt((double)n);i++){
			if(slist[i]==true){
				a=i;
				break;
			}
		}
	}
	cin>>m>>n;
	while(m!=0||n!=0){
	for( i = 0; i <=n;i++ ){
		klist[i]=false;
	}
	for(i=0;i<m;i++){
		cin>>List[i];
		klist[List[i]]=true;
	}
		for(i=0;i<=n;i++){
			if(klist[i]){
			for(j=0;j<m;j++){
				if(i+List[j]<=n){
				klist[i+List[j]]=true;
				}
			}
		}
	}
		for(i=n;i>0;i--){
			if(klist[i]&&slist[i]){
			break;
		}
	}
		if(i==0){
			printf("NA\n");
		}
		else{
		printf("%d\n",i);
		}
		cin>>m>>n;
	}
	return 0;
}