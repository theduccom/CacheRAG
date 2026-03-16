#include<cstdio>
#include<algorithm>
using namespace std;
	
int length(int a[]){
	int res=0,len=0;
	for(int i=0;i<14;i++){
		if(a[i])len++;
		else len=0;
		res=max(res,len);
	}
	return res;
}
int main(){
	int a[14];
	int n;
	while(scanf("%d",&n)!=EOF){
		fill(a,a+14,0);
		a[n-1]++;
		if(n==1)a[13]++;
		for(int i=1;i<5;i++){
			scanf(",%d",&n);
			a[n-1]++;
			if(n==1)a[13]++;
		}
		char *ans="null";
		if(count(a,a+13,4)==1) ans="four card";
		else if(count(a,a+13,3)==1 && count(a,a+13,2)==1)ans="full house";
		else if(length(a)==5) ans="straight";
		else if(count(a,a+13,3)==1) ans="three card";
		else if(count(a,a+13,2)==2) ans="two pair";
		else if(count(a,a+13,2)==1) ans="one pair";
		puts(ans);
	}
	return 0;
}