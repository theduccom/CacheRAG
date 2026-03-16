#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b,c;
	int n;
	int x;
	while(true){
		scanf("%d%d%d",&a,&b,&c);
		if(a==0&&b==0&&c==0)return 0;
		scanf("%d",&n);
		if(a>b)swap(a,b);
		if(b>c)swap(b,c);
		if(a>c)swap(a,c);
		int z=a*a+b*b;
		for(int i=0;i<n;i++){
			scanf("%d",&x);
			if(z<(2*x)*(2*x))printf("OK\n");
			else printf("NA\n");
		}
	}
}