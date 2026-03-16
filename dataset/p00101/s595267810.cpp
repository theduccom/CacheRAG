#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<string>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<cmath>
#include<queue>
#include<cstring>
using namespace std;

int main(){
	int N;
	cin>>N;
	cin.ignore();
	while(N--){
		char S[1001];
		for(int i=0;;i++){
			scanf("%c",&S[i]);
			if(S[i]=='\n'){
				S[i] = '\0'; break;
			}
		}
		int len = strlen(S);
		for(int i=0;i<len;i++){
			if(strncmp(S+i,"Hoshino",7)==0){
				printf("Hoshina"); i += 6;
			}
			else printf("%c",S[i]);
		}puts("");
	}
    return 0;
}