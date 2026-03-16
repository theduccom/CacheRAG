#include <cstdio>
#include <iostream>
#define M 50200

using namespace std;

int main() {

	int n, min, max, s[M];
	bool x[M];

	for(int i=2; i<=M; i++) {
		x[i]=false;
	}
	for(int i=2; i<224; i++) {
		if(x[i])
			continue;
		for(int j=i*2; j<M; j+=i) {
			if(!x[j])
				x[j]=true;
		}
	}
	for(int i=2; i<M; i++) {
		s[i]=0;
	}

	s[2]=2;
	for(int i=3; i<M; i+=2) {
		if(!x[i])
			s[i]=i;
	}

	while(scanf("%d", &n)!=EOF) {
		max=0;
		for(int i=3; ; i+=2) {
			if(s[i]>n) {
				max=s[i];
				for(int j=i; j!=0; j--) {
					if(s[j]<n&&s[j]!=0) {
						min=s[j];
						break;
					}
				}
			}
			if(max!=0)
				break;
		}
		cout << min << " " << max << endl;
	}
	

	return 0;

}