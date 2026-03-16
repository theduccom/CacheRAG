#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
#define loop(i,a,b) for(int i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)
#define all(a) (a).begin(), (a).end()

const double eps = 1e-10;
const double pi  = acos(-1.0);
const double inf = (int)1e8;

int main(){
	string s;
	while(getline(cin, s)){
		for(int j=0; j < 26; j++){
			for(int i=0; i< s.size(); i++){
				if('a' <= s[i] && s[i] < 'z')s[i]++;
				else if(s[i] == 'z') s[i] = 'a';
			}
			bool possible = false;
			if(s.find("the") != string::npos || s.find("this") != string::npos || s.find("that") != string::npos){
				cout << s << endl;
			}
		}
	}
}