#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,p,d1,d2,mp,md;
	while(cin >> n,n){
		md = -1;
		for(int i = 0;i < n;i++){
		cin >> p >> d1 >> d2;
		if(d1 + d2 > md){
			mp = p;
			md = d1 + d2;
		}
		}
		cout << mp << " " << md << endl;
	}
	return 0;
}