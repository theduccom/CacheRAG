#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
typedef long long ll;

int main(){
	int b[3];
	scanf("%d%d%d",b,b+1,b+2);
	if(b[0]==1&&b[1]==1) printf("Open\n");
	else if(b[2]) printf("Open\n");
	else printf("Close\n");
}