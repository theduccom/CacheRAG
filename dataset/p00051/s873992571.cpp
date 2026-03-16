#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
	int n;	scanf("%d ",&n);
	while(n--){
		int a[8];
		for(int i=0;i<8;i++)	a[i]=getchar()-'0';
		getchar();
		sort(a,a+8);
		int vmin=0,vmax=0;
		for(int i=0;i<8;i++){
			vmin=vmin*10+a[i];
			vmax=vmax*10+a[7-i];
		}
		printf("%d\n",vmax-vmin);
	}

	return 0;
}