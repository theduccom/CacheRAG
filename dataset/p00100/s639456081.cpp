#include <iostream>
#include <cstdio>
#define X 4001
#define V 1000000
using namespace std;

int main(){
	int n;
	while(1){
		cin >> n;
		if(n==0) break;
		long a[X];
		int f[X];
		for(int i=0;i<X;i++) a[i] = 0;
		for(int i=0;i<X;i++) f[i] = 0;
		int b;
		long c,d;
		int s = 0;
		for(int i=0;i<n;i++){
			cin >> b >> c >> d;
			if(a[b]<V) a[b] += c*d;
			if(f[b]==0){
				s++;
				f[b] = s;
			}
		}
		bool e = true;
		for(int i=1;i<X;i++){
			for(int j=0;j<X;j++){
				if(f[j]!=i) continue;
				if(a[j]>=V){
					e = false;
					cout << j << endl;
				}
				break;
			}
		}
		if(e) cout << "NA" << endl;
	}
}