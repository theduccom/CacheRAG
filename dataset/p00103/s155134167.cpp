#include <iostream>
#include <string>
using namespace std;
main() {
	int n,p,r,a;
	string t;
	cin >> n;
	for(int i=0;i<n;i++){
		a=0;r=0;p=0;
		while(a<3){
			cin >> t;
			if(t=="HIT"){
				r++;
				if(r>3) {r--;p++;}
			} else if(t=="OUT"){
				a++;
			} else {
				p+=r+1;
				r=0;
			}
		}
		cout << p << endl;
	}
	return 0;
}