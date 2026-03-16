#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <functional>
#include <sstream>
using namespace std;

#define REP(i,a,n) for(int i=(a);i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()

string chipher(string tmp, int k){
	rep(i,tmp.size())if( 'a'<=tmp[i] && tmp[i]<='z' ){
		if( tmp[i]+k>'z' ){
			tmp[i] = (tmp[i]+k-'z'-1)+'a';
		}else{
			tmp[i] = tmp[i]+k;
		}
	}
	return tmp;
}
int main(){
	string in;
	while(getline(cin,in)){
		rep(i,26){
			string tmp = chipher(in,i);
			if( tmp.find("this")!=string::npos || tmp.find("the")!=string::npos ||
					tmp.find("that")!=string::npos ){
					
				cout << tmp << endl; break;
			}
		}
	}
	return 0;
}