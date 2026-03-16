#include "bits/stdc++.h"
using namespace std;

int main() {
	char X,Y,CUP='A';
	while(scanf("%c,%c",&X,&Y)!=EOF){
		if(CUP==X){
			CUP=Y;
		}else if(CUP==Y){
			CUP=X;
		}
	}
	cout<<CUP<<endl;
}