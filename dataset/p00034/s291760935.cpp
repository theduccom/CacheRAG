#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int d[10],v1,v2;
	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&d[0],&d[1],&d[2],&d[3],&d[4],&d[5],&d[6],&d[7],&d[8],&d[9],&v1,&v2)!=EOF){
		int sum=0,table[11];
		for(int i=0;i<10;++i){
			table[i]=sum;
			sum+=d[i];
		}
		table[10]=sum;
		for(int i=10;i>=0;--i){
			if(table[i]<(double)(v1*sum)/(v1+v2)){
				cout<<i+1<<"\n";
				break;
			}
		}
	}
	return 0;
}