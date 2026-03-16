#include <iostream>
#include <vector>
#include <cmath>
#include <set>
using namespace std;
#define X first
#define Y second
#define rep(i,n) for(int i=0;i<n;i++)

class C{
public:
	double x;
	double y;
	double r;
};

double euc(C a,C b){
	a.x -= b.x;
	a.y -= b.y;
	return sqrt(a.x*a.x+a.y*a.y);
}

int main(){
	int n;
	C a,b;
	cin >> n;
	while(n--){
		cin >> a.x >> a.y >> a.r >> b.x >> b.y >> b.r;
		
		if( euc(a,b)+b.r < a.r && a.r > b.r ){
			cout << 2 << endl;
		}else if( euc(a,b)+a.r < b.r && b.r > a.r ){
			cout << -2 << endl;
		}else if(euc(a,b)-b.r <= a.r || euc(a,b)-a.r <= b.r){
			cout << 1 << endl;
		}else{
			cout << 0 << endl;
		}
	}
}