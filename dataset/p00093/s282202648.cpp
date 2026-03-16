#include <bits/stdc++.h>
#define range(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define rep(i,n) range(i,0,n)
using namespace std;

inline bool isleap(int year){
	if(year%400==0)
		return true;
	if(year%100==0)
		return false;
	if(year%4==0)
		return true;
	return false;
}

int main(void){
	int a,b;
	bool space=false;
	while(cin >> a >> b,a|b){
		if(space) puts("");
		bool ans=false;
		range(i,a,b+1) if(isleap(i)) cout << i << endl,ans=true;
		if(!ans) puts("NA");
		space=true;
	}
	return 0;
}