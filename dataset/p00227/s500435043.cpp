#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a,b,i,sum=0;
	int c[10000];
	while(1){
		cin >> a >> b;
		if(a==0 && b==0) break;
		for(i=0;i<a;i++){
			cin >> c[i];
			sum+=c[i];
		}
		sort(c,c+a);
		reverse(c,c+a);
		for(i=b-1;i<a;i+=b){
			sum-=c[i];
		}
		cout << sum << endl;
		sum=0;
	}
	

	return 0;
}