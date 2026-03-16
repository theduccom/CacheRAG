#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	while(N--){
		string a,b;
		cin >> a >> b;
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());
		while(a.size()>b.size())b += '0';
		while(a.size()<b.size())a += '0';
		string r;
		int c = 0; 
			for(int i = 0 ; i < a.size() ; i++){
			int d = a[i] + b[i] + c - 2 * '0';
			if( d >= 10 ) c = 1;
			else c = 0;
			r += d%10 + '0';
		}
		if(c)r += '0' + c;
		reverse(r.begin(),r.end());
		if( r.size() > 80 ) cout << "overflow" << endl;
		else cout << r << endl;
	}
}