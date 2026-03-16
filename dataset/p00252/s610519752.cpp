#include <bits/stdc++.h>
using namespace std;

#define Rep(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, n) Rep(i, 0, n)

template<class T> T read() {
	T t;
	cin >> t;
	return t;
}

int main(){
	// rep(i, 5){
	int a = read<int>(), b = read<int>(), c = read<int>();
	if((a&&b)||c){
		cout << "Open" << endl;
	}else{
		cout << "Close" << endl;
	}
	// }
}