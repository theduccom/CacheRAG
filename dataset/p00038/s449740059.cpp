#include<cstdio>
#include<cmath>
#include <stdlib.h>
#include<algorithm>

using namespace std;

int main(){
	int p[5],pair[5],str[5],che[5];
	while( scanf("%d,%d,%d,%d,%d",&p[0],&p[1],&p[2],&p[3],&p[4]) != EOF ){
		sort(p,p+5);
		pair[0]=0;
		str[0]=0;
		che[0]=0;
		for(int i=1;i<5;i++){
			if(p[i]==p[i-1]){
				pair[i] = pair[i-1]+1;
			}
			else{
				pair[i]=0;
			}
			if(p[i-1]+1==p[i]){
				str[i] = str[i-1]+1;
			}
			else{
				str[i] = 0;
			}
			che[i]=0;
		}
		if(p[0]==1&&p[4]==13)str[4]++;
		for(int i=0;i<5;i++){
			che[pair[i]]++;
		}
		if(che[3]==1){
			printf("four card\n");
		}
		else if(che[2]==1&&che[1]==2){
			printf("full house\n");
		}
		else if(str[4]==4){
			printf("straight\n");
		}
		else if(che[2]==1){
			printf("three card\n");
		}
		else if(che[1]==2){
			printf("two pair\n");
		}
		else if(che[1]==1){
			printf("one pair\n");
		}
		else{
			printf("null\n");
		}
	}
	return 0;
}