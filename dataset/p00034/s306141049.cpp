#include<cstdio>

using namespace std;

int main(void){
	int ku[11],i,ans=0;
	float v1,v2,zen=0,hit;

	while((scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%f,%f",&ku[1],&ku[2],&ku[3],&ku[4],&ku[5],&ku[6],&ku[7],&ku[8],&ku[9],&ku[10],&v1,&v2))!=EOF){
			for(i=1;i<=10;i++)	zen+=ku[i];
			hit=zen/(v1+v2)*v1;
			for(i=1;i<=10;i++){
				ans+=ku[i];
				if(ans>=hit){
					printf("%d\n",i);
					break;
				}
			}
			zen=0;
			ans=0;
	}

	return 0;
}