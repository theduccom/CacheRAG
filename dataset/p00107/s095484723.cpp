#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
	int s1,s2,b;
	while(cin >> s1 >> s2 >> b){
		if(s1 == 0 && s2 == 0 && b == 0) break;
		
		if(s1 >= s2) swap(s1,s2);
		if(s2 >= 	b) swap(s2,b);
		int n;
		cin >> n;
		for(int i = 0; i < n; i++){
			int r;
			cin >> r;
		 if(sqrt(s1*s1 + s2*s2) >= r*2) cout << "NA" << endl;
			else cout << "OK" << endl;
		}
	}
}