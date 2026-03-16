#include<cstdio>
using namespace std;
int main(){
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	if(z == 1 || x+y == 2)puts("Open");
	else puts("Close");
	return 0;
}