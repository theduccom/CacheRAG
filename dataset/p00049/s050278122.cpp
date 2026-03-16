#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
using namespace std;

int num[4];
int main(){
	string s;
	while(cin >> s){
		if(cin.eof()) break;
		string in=s.substr(s.size()-2,2);
		if(in==",A")
			num[0]++;
		else if(in==",B")
			num[1]++;
		else if(in=="AB")
			num[2]++;
		else
			num[3]++;
	}
	rep(i,4) cout << num[i] << endl;
	return 0;
}