#include<stdio.h>
#include<map>
#include<algorithm>
using namespace std;
typedef pair<int,int> P;
long long s[4000];
P p[4000];
int min(int a,int b){return a<b?a:b;}
int main(){
	int n,i;
	while(1){
		scanf("%d",&n);
		if(n==0)return 0;
		for(i=0;i<4000;i++){
			s[i]=0;
			p[i].first=5000;
			p[i].second=i;
		}
		for(i=0;i<n;i++){
			int a,b,c;
			scanf("%d %d %d",&a,&b,&c);
			s[a-1]+=(long long)b*c;
			p[a-1].first=min(p[a-1].first,i);
		}
		sort(p,p+4000);
		bool f=true;
		for(i=0;i<4000;i++){
			if(p[i].first==5000)break;
			if(s[p[i].second]>=1000000){
				printf("%d\n",p[i].second+1);
				f=false;
			}
		}
		if(f)printf("NA\n");
	}
}