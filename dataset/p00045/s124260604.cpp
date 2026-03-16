#include<cstdio>

using namespace std;

int main(void){
	double work,data=0;
	int mon,num,cnt=0,sum=0,ave;

	while((scanf("%d,%d",&mon,&num))!=EOF){
		sum+=mon*num;
		cnt++;
		data+=num;
	}
	work=data/cnt;
	ave=work+0.5;
	printf("%d\n%d\n",sum,ave);

	return 0;
}