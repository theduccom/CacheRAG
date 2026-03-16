#include <cstdio>
bool prime[104730];
int main() {
for(int i=2;i*i<=104729;i++)
for(int j=i*2;j<=104729;j+=i)prime[j]=true;
int n;
while(scanf("%d",&n),n) {
int p=0,sum=0;
for(int i=2;i<=104729;i++) {
if(!prime[i])sum+=i,p++;
if(p==n)break;
}
printf("%d\n",sum);
}
}