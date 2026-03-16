#include <iostream>
using namespace std;

int main(){
	int l[10],va,vb,v,tl;
	double a,tv;
	char ch;
	while(1){
		tl = 0;
		for(int i = 0;i < 10;++i){
			cin >> l[i];
			if(cin.eof()) break;
			cin >> ch;
			tl += l[i];
		}
		if(cin.eof()) break;
		cin >> va >> ch >> vb;
		v = va + vb;
		a = (double)tl / (double)v;
		tv = (double)va;
		tv *= a;
		for(int i = 0;i < 10;++i){
			tv -= (double)l[i];
			if(tv <= 0.0) {
				cout << i + 1 << endl;
				break;
			}
		}

	}
	return 0;
}