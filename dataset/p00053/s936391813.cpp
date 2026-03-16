#include <iostream>
#define M 104976

using namespace std;

int main() {

	int a=2, n, s, l[10001];
	bool x[M];

	for(int i=2; i<=M; i++) {
		x[i]=false;
	}
	for(int i=2; i<324; i++) {
		if(x[i])
			continue;
		for(int j=i*2; j<M; j+=i) {
			if(!x[j])
				x[j]=true;
		}
	}

	l[1]=2;
	for(int i=3; i<M; i+=2) {
		if(!x[i]) {
			l[a]=i;
			a++;
		}
	}

	while(cin >> n) {
		if(n==0)
			break;
		s=0;
		for(int i=1; i<n+1; i++) {
			s+=l[i];
		}
		cout << s << endl;
	}
	

	return 0;

}