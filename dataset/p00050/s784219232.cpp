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
	char s[1023],t[1023],*o;
	const char *a="apple",*p="peach",*n="nnnnn";
	gets(s);
	strcpy(t,s);
	o=s;
	while((o=strstr(o,a))!=NULL){
		strncpy(o-s+t,p,5);
		strncpy(o,n,5);
	}
	o=s;
	while((o=strstr(o,p))!=NULL){
		strncpy(o-s+t,a,5);
		strncpy(o,n,5);
	}
	puts(t);
	return 0;
}