#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	int n;
	while(cin >> n && n){
		string p[10];
		for(int i = 0 ; i < n ; i++){
			int a;
			cin >> a;
			p[a] += "*";
		}
		for(int i = 0 ; i < 10 ; i++){
			cout << (p[i].size()==0?"-":p[i]) << endl;
		}
	}
}