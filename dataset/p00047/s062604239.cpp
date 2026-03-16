#include <cstdio>
using namespace std;
int main(){
	int x[100]={},i;
	x[65]=1;
char a[3];
	while(scanf("%s",&a)!=EOF){
		int s=x[a[0]];
		x[a[0]]=x[a[2]];
		x[a[2]]=s;
	}
	for(i=65;i<=67;i++){
		if(x[i]==1){
			if(i==65) printf("A\n");
			if(i==66) printf("B\n");
			if(i==67) printf("C\n");
		}}
	return 0;
}