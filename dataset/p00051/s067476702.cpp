#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int num[8];
		for(int i=0; i<8; i++){scanf("%1d",&num[i]);}
		sort(num,num+8);
		int x=num[0]*1+num[1]*10+num[2]*100+num[3]*1000+num[4]*10000+num[5]*100000+num[6]*1000000+num[7]*10000000;
		int y=num[7]*1+num[6]*10+num[5]*100+num[4]*1000+num[3]*10000+num[2]*100000+num[1]*1000000+num[0]*10000000;
		printf("%d\n",x-y);
	}
	return 0;
}