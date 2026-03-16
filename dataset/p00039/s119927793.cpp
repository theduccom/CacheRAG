#include <iostream>
#include <map>
#include <algorithm>
#include <cstdio>
#include <string>

#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)

using namespace std;


int main(void){

int cnt=0;
int sc[7] ={1000,500,100,50,10,5,1};
string ss[7] ={"M","D","C","L","X","V","I"}, wk, wwk;
map<string, int> rtb;

//	rep(i,7) rtb.insert(pair<string, int>(ss[i],sc[i]));
	rep(i,7) rtb[ss[i]] = sc[i];
	while(!cin.eof()){
		cin >> wk;
		if(cin.eof()) break;
		int su=0;
		string w1,w2;
		rep(i,wk.size()){
			bool mn = false;
			w1 = wk[i];
			rep2(j,i+1,wk.size()){
				w2 = wk[j];
				if(rtb[w1] < rtb[w2 ]) mn = true;
			}
			if(mn) su -= rtb[w1];
			else   su += rtb[w1];
//			cout << rtb[wwk] << "-";
		}
		cout << su << endl;
		cnt++; if(cnt>50) break;
	}	
	
	return 0;
	
	
}