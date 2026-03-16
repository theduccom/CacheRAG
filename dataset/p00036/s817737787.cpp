using namespace std;
#include <iostream>
#include <string>
#include <set>
#include <functional>
#include <vector>
#include <algorithm>
#include <stdio.h>
void solve(){
	char ans;
	string s;
	int si,sj;
	while(true){
	bool fir=true;
		bool table[15][15]={};
		for(int i=0;i<8;i++){
			if(!(cin>>s))return;
			for(int j=0;j<8;j++){
				if(s[j]-'0'==1){
					if(fir){si=i;sj=j;fir=false;}
					table[i][j]=true;
				}
			}
		}
		if(table[si+3][sj]){ans='B';}
		else if(table[si][sj+3]){ans='C';}
		else if(table[si+1][sj+1]){//AEF
			if(!table[si+1][sj])ans='E';
			else if(table[si][sj+1])ans='A';
			else ans='F';
		}else if(table[si][sj+1]){ans='G';}else{ans='D';}
		//for(int i=0;i<8;i++)for(int j=0;j<8;j++)printf(j==7?"%d\n":"%d",(int)table[i][j]);
		//printf("%d,%d\n",si,sj);
		cout<<ans<<endl;
	}
}
int main()
{
	solve();
    return 0;
}