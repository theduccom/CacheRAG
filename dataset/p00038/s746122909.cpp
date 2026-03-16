#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

int card[5];

int c[13];

void solve(){
	memset(c,0,sizeof(c));
	REP(i,5){
		c[card[i]-1]++;
	}
	bool f1=false,f2=false;
	REP(i,13){
		if (c[i]>=4){
			f1=true;
		}
	}
	if (f1){
		cout<<"four card"<<endl;
		return;
	}
	REP(i,13){
		if (c[i]==3){
			f1=true;
		}else if (c[i]==2){
			f2=true;
		}
	}
	if (f1 && f2){
		cout<<"full house"<<endl;
		return;
	}
	f1=f2=false;
	REP(i,10){
		bool f=true;
		REP(j,5){
			if (c[(i+j)%13]!=1){
				f=false;
			}
		}
		if (f){
			f1=true;
		}
	}
	if (f1){
		cout<<"straight"<<endl;
		return;
	}
	REP(i,13){
		if (c[i]==3){
			f1=true;
		}
	}
	if (f1){
		cout<<"three card"<<endl;
		return;
	}
	int k=0;
	REP(i,13){
		if (c[i]==2){
			k++;
		}
	}
	if (k==2){
		cout<<"two pair"<<endl;
	}else if (k==1){
		cout<<"one pair"<<endl;
	}else{
		cout<<"null"<<endl;
	}
}

int main(){
	while (scanf("%d,%d,%d,%d,%d",card,card+1,card+2,card+3,card+4)!=EOF){
		solve();
	}
	return 0;
}