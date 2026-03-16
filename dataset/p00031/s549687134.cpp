#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
	while (scanf("%d",&N)!=EOF){
		bool f=false;
		for (int i=1;i<=512;i<<=1){
			if (N&i){
				if (f) putchar(' ');
				printf("%d",i);
				f=true;
			}
		}
		putchar('\n');
	}
	return 0;
}