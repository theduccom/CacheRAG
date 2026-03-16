#include <cstdio>

using namespace std;

void nap(int max,int i){
	int memo[1001]={0};
	int n,v,w;//n:個数 v:価値 w:重さ
	int ansV=0;
	int ansW=0;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d,%d",&v,&w);
		for(int j=max;j>=w;j--){
			if(j==w || memo[j-w]>0){
				if(memo[j]<memo[j-w]+v){
					memo[j]=memo[j-w]+v;
				}
			}
		}
	}
	
	for(int i=0;i<=max;i++){
		if(memo[i]>ansV){
			ansV=memo[i];
			ansW=i;
		}
	}
	printf("Case %d:\n",i);
	printf("%d\n%d\n",ansV,ansW);
}

int main(){
	int w,i=1;
	scanf("%d",&w);
	while(w!=0){
		nap(w,i);
		i++;
		scanf("%d",&w);
	}
}