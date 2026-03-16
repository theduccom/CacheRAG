#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	/*(^(^(^(^(^o^)^)^)^)^) &#9602;&#9605;&#9607;&#9608;&#9619;&#9618;&#9617;('ω')&#9617;&#9618;&#9619;&#9608;&#9607;&#9605;&#9602; */
	double a,b,c,d,e;
	while(1){
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a==0 && b==0 && c==0) break;
if(a<b){
	int w=a;
	a=b;
	b=w;
}
if(a<c){
	int w=a;
	a=c;
	c=w;
}
if(b<c){
	int w=b;
	b=c;
	c=w;
}
double u=sqrt(b*b+c*c);
int i,n;
scanf("%d",&n);
for(i=0;i<n;i++){
int se;
scanf("%d",&se);
if(se*2>u) printf("OK\n");
else printf("NA\n");
}
}
	return 0;
}