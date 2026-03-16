#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
	int n,id,i,f,k,a,b,jun[4001],ch[4001],da[4001];
	while (cin >> n) {
		if (n==0) break;
		memset(da,0,sizeof(da));
		memset(ch,0,sizeof(ch));
		k=0;
		for (i=0;i<n;i++) {
			cin >> id >> a >> b;
			if (ch[id]==0) { ch[id]=1; jun[k++]=id; }
			if ((a/100)*(b/100)>100 || da[id]+a*b>999999) da[id]=1000000; else da[id]+=a*b; 
		}
    f=0;
	for (i=0;i<k;i++) if (da[jun[i]]>999999) { cout << jun[i] << endl; f=1; }
	if (f==0) cout << "NA" << endl;
	}
	return 0;
	}