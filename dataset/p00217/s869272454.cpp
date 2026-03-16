#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int>P;

#define INF 2<<29
#define F first
#define S second

int main(){
  int n;
  int sum=0;
  int ansp;
  int p,d1,d2;
  while(1){
    scanf("%d",&n);
    if(n==0) break;
    sum=0;
    for(int i=0;i<n;i++){
      scanf("%d %d %d",&p,&d1,&d2);
      if(sum<d1+d2){
	ansp=p;
	sum=d1+d2;
      }
    }
    printf("%d %d\n",ansp,sum);
  }

  return (0);
}

