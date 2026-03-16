#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int n;
	while(cin >> n , n){
		int hist[10] = {0} , a;
		rep(i,n)cin >> a , hist[a]++;
		rep(i,10){
			if(!hist[i])cout << "-";
			while(hist[i]--)cout << "*";
			cout << endl;
		}
	}
}