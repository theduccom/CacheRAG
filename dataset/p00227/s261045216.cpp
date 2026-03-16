#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n,m,total,c;
	int p[10000];
	
	while(scanf("%d%d",&n,&m) && n != 0 && m != 0){
		for(int i = 0; i < n; i++){
			scanf("%d",&p[i]);
		}
		sort(&p[0],&p[n-1]+1);
		
		c = total = 0;
		for(int i = n-1; i >= 0; i--){
			c++;
			if(c % m != 0){
				total += p[i];
			}
		}
		
		printf("%d\n",total);
	}

	return 0;
}