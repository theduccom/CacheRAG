#include<cstdio>
#include<cstring>
using namespace std;

#define N 50002
bool is_prime[N];

void sieve(){
	memset(is_prime,1,sizeof(is_prime));
	is_prime[0] = is_prime[1] = false;
	for(int x=2;x<N;++x){
		if(is_prime[x]){
			for(int i=x+x;i<N;i+=x){
				is_prime[i] = false;
			}
		}
	}
}

int main(){
	sieve();
	int j;
	while(scanf("%d",&j) != EOF , j){
		int t = 0;
		bool mat[j+1];
		memset(mat,0,sizeof(mat));
		for(int x=2;x<=j;++x){
			if( is_prime[x] && is_prime[j-x] && !mat[x]){
				mat[x] = true;
				mat[j-x] = true;
				t++;
			}
		}
		printf("%d\n",t);
	}
	return 0;
}