#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;
#define int long long
const int PMAX=50000;
vector<int> PF(PMAX, 1);
void MKPF(){for (int i=2;i<sqrt(PMAX);i++) if(PF[i]==1) for(int j=i*2;j<PMAX;j+=i) PF[j] = 0;}
signed main(){
	MKPF();
	int a;
	while( scanf("%lld", &a) != EOF ){
		if(a==0) break;
		int c=0;
		for(int i=2; i<=a/2; i++){
			if(PF[i]==1 && PF[a-i]==1) c++;
		}
		cout << c << endl;
	}
	return 0;
}