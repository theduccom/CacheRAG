#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<string.h>
#include<map>
#include<queue>

using namespace std;

typedef pair<int,int> pii;

#define rep(i,j) for(int i=0;i<(j);i++)
#define reps(i,j,k) for(int i=j;i<=k;i++)
#define in(i,j,k) ((i)>=(j)&&(i)<=(k))

int main(){
	char s[101],o[900];
	int p,l;
	while(~scanf("%s",s)){
		p=0;
		l=strlen(s);
		rep(i,l){
			if(s[i]=='@'){
				int c=s[i+1]-'0';
				rep(j,c)o[i+j+p]=s[i+2];
				p+=c-3;
				i+=2;
			}
			else o[i+p]=s[i];
		}
		o[l+p]=0;
		puts(o);
	}
	
	return 0;
}