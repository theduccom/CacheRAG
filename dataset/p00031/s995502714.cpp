#include <cstdio>
int main(){int n,s;while(scanf("%d",&n)+1){for(s=1;n;s*=2){n&s&&printf("%d%c",s,n-s?32:10);n-=n&s;}}}