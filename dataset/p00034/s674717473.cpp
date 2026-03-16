#include<cstdio>
using namespace std;

int l[11],v1,v2;
double sum,a;


int main(){
	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&l[10],&v1,&v2)!=EOF){
		sum=l[1]+l[2]+l[3]+l[4]+l[5]+l[6]+l[7]+l[8]+l[9]+l[10];
		a=sum*v1/(v1+v2);
		for(int i=1;i<11;i++){
			if(a>l[i]) a-=l[i];
			else {
				printf("%d\n",i);
				break;
			}
		}
	}

	return 0;
}