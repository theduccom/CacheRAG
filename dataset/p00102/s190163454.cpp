#include <iostream>
#include <stdio.h>
#include <time.h>
#define FOR1 for(int i=0;i<n;i++)
#define FOR2 for(int j=0;j<n;j++)
using namespace std;
int main(){
	int table[50][50],n,sum=0,line=0,row=0;
	while(1){
	cin>>n;
	if(n==0){
		break;
	}
	FOR1{
		FOR2{
			cin>>table[i][j];
			sum+=table[i][j];
		}
	}
	FOR1{
		FOR2{
			printf("%5d",table[i][j]);
			line+=table[i][j];
		}
		printf("%5d\n",line);
		line=0;
	}
	FOR1{
		FOR2{
			row+=table[j][i];
		}
		printf("%5d",row);
		row=0;
	}
	printf("%5d\n",sum);
	sum=0;
	}
	return 0;
}