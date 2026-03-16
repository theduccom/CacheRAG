#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int i,s,m,n,d[1000];
    while(cin >> n >> m && n!=0) {
		for (i=0,s=0;i<n;i++) { cin >> d[i]; s+=d[i]; }
		sort(d,d+n,greater<int>());
		for (i=m-1;i<n;i+=m) s-=d[i];
		cout << s << endl;
		} 
	return 0;
}