#include <iostream>
#include <cstdio>
using namespace std;
int n,score, nout,ining;
int base[4];
string s;
int main(){
	cin >> n;
	while(1){
		cin >> s;
		if(s=="HIT"){
			score+=base[3];
			base[3]=base[2];
			base[2]=base[1];
			base[1]=1;
		}else if(s=="HOMERUN"){
			score+=1+base[1]+base[2]+base[3];
			base[1]=base[2]=base[3]=0;
		}else if(s=="OUT"){
			nout++;
			if(nout==3){
				if(ining==n)break;
				ining++;
				cout << score<< endl;
				nout=0;
				score=0;
				base[1]=base[2]=base[3]=0;
			}
		}
	}
	return 0;
}