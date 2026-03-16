#include<stdio.h>
void funk(int,int);
char sima[13][13];
int main(void)
{
	int i,m,sk;
	sk=0;
	while(scanf("%s",&sima[0])!=EOF){
		for(i=1;i<12;i++){
				scanf("%s",sima[i]);
			}
		for(i=0;i<12;i++){
			for(m=0;m<12;m++){
				if(sima[i][m]=='1'){
					sk++;
					funk(i,m);
				}
			}
		}
		printf("%d\n",sk);
		sk=0;
	}
	return 0;
}
void funk(int i,int m){
	sima[i][m]='0';
	if(i+1<12){
		if(sima[i+1][m]=='1'){
			funk(i+1,m);
		}
	}
	if(i-1>=0){
		if(sima[i-1][m]=='1'){
			funk(i-1,m);
		}
	}
	if(m+1<12){
	if(sima[i][m+1]=='1'){
		funk(i,m+1);
	}
	}
	if(m-1>=0){
		if(sima[i][m-1]=='1'){
			funk(i,m-1);
		}
	}
}