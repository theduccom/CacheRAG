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
	while(N--){
		int out=0,fld[4]={},score=0;
		string S;
		while(out<3){
			cin>>S;
			if(S=="HIT"){
				for(int i=3;i>=0;i--) fld[(i+1)%4] = fld[i];
				fld[1] = 1;
				score += fld[0]; fld[0] = 0;
			}
			else if(S=="HOMERUN"){
				fld[0] = 1;
				for(int i=0;i<=3;i++){
					score += fld[i];
					fld[i] = 0;
				}
			}
			else out++;
		}
		printf("%d\n",score);
	}
    return 0;
}