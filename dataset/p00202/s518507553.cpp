#include <iostream>
using namespace std;
int i,j,a,x,n[30],pn[10000002],pf[10000002];
int main() {
	for (i=2;i<10000000;i++) {
		if (pn[i]==0) { pn[i]=1;
			if (i*2<1000001) for (j=i*2;j<1000000;j+=i) pn[j]=2;
		}
	}	
	while(cin >> a >> x) {
		if (a==0 && x==0) break;
		for (i=0;i<=x;i++) pf[i]=0; pf[0]=1;
		for (i=0;i<a;i++) cin >> n[i];
		for (i=0;i<a;i++) for (j=0;j<=x;j++) if (pf[j]==1 && j+n[i]<1000000) pf[j+n[i]]=1;
		for (i=x;i>1;i--) if (pf[i]==1 && pn[i]==1) break;
		if (i==1) cout << "NA"; else cout << i;
		cout << endl;   
	}
	return 0;
}