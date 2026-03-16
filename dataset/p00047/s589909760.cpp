/*
 * src.cpp
 *
 *  Created on: 2016/07/26
 *      Author: joi
 */

#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

bool c[3];

int main(){
	c[0]=true;
	char a,b;
	while(scanf("%c,%c",&a,&b)!=EOF){
		swap(c[a-'A'],c[b-'A']);
	}
	REP(i,3){
		if (c[i]) printf("%c\n",'A'+i);
	}
	return 0;
}