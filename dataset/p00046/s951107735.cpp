#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	double f,h,l;
	
	cin >> l;
	h = l;
	
	while(cin >> f){
		h = max(h,f);
		l = min(l,f);
	}
	
	cout << h-l << endl;
	
	return 0;
}