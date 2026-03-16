#include<iostream>
#include<sstream>
#include<fstream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<algorithm>
#include<string>
#include<utility>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;

int main(){
	char line[105];
	while(scanf("%s",line) != EOF){
		int b = 0;
		while(line[b] != 0){
			if( line[b] == '@'){
				b+=2;
				for(int x=0;x<line[b-1]-48;++x){
					printf("%c",line[b]);
				}
			}else{
				printf("%c",line[b]);
			}
			b++;
		}
		printf("\n");
	}
	return 0;
}