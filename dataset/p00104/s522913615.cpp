#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

main(){
	int n=1,m=1,b[100],c[100];
	
	char a[100][100];
	
	while(1){
		scanf("%d%d",&n,&m);
		if(n==0 && m==0) break;
		for(int i=0 ; i<n ; i++){
			scanf("%s",a[i]);
		}
		
		int i=0,j=0,o=0,u=0;
		
		while(1){
			if(a[i][j]=='>') j++;
			if(a[i][j]=='<') j--;
			if(a[i][j]=='v') i++;
			if(a[i][j]=='^') i--;
			if(a[i][j]=='.'){
				u=0; break;
			}
			b[o]=i;
			c[o]=j;
			for(int p=0; p<o ; p++){
				if(b[p]==i && c[p]==j){
					 u++;
				}
			}
			o++;
			if(u>0) break;
		}
		
		if(u==1) printf("LOOP\n");
			else printf("%d %d\n",j,i);
		u=0;
	}

}