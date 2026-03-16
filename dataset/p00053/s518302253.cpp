#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;
#define int long long
const int PMAX=120000;
vector<int> PF(PMAX, 1);
void MKPF(){for (int i=2;i<sqrt(PMAX);i++) if(PF[i]==1) for(int j=i*2;j<PMAX;j+=i) PF[j] = 0;}
signed main(){
	MKPF();
	vector<int> sp(10001,0);
	int ix = 2;
	for(int i=1;i<10001;i++){
		while(PF[ix]!=1) ix++;
		sp[i] = sp[i-1] + ix;
		ix++;
	}
	int a;
	while( scanf("%lld", &a) != EOF ){
		if(a==0) break;
		cout << sp[a] << endl;
	}
	return 0;
}