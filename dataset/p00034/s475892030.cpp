#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int l[10],v1,v2,sum;
	float x;
	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",l,l+1,l+2,l+3,l+4,l+5,l+6,l+7,l+8,l+9,&v1,&v2)+1){
		for(int i=1;i<10;++i){
			l[i] += l[i-1];
		}
		
		x = (float)l[9] * v1 / (v1+v2);
		for(int i=0;i<10;++i){
			if(x<=l[i]){
				cout<<i+1<<endl;
				break;
			}
		}
	}
	return 0;
}