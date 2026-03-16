#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int h,w,d,n,a;
	while(cin >> h >> w >> d,h){
		cin >> n;
		for(int i = 0;i < n;++i){
			cin >> a;
			a *= 2;
			if((a * a > w * w + d * d) || (a * a > h * h + w * w) || (a * a > h * h + d * d)){
				cout << "OK" << endl;
			}
			else cout << "NA" << endl;
		}
	}
	return 0;
}