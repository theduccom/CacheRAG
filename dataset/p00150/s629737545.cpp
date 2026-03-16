/*it will crash due to not much memory
available in the cache1() in my lappy
but got accepted
in UVA ;)*/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define clear(a) memset(a,0,sizeof(a))
#define N 10000
char a[10002];
void seive(void){
	int k = sqrt(N);
	clear(a);
	a[0]=1;
	a[1]=1;
	int i;
	for(i=2;i<=k;i++){
		if(a[i]==0){
			int j;
			for(j=i+i;j<=N;j+=i){
				a[j]=1;
			}
		}
	}
}

int main(){
    int n,i,j,k;
    seive();
    while(scanf("%d",&n) && n){
        for(i=n;i>=2;i--){
            if(!a[i] && !a[i-2]){
                printf("%d %d\n",i-2,i);
                break;
            }
        }
    }
    return 0;
}