#include <iostream>
#include <stack>
#include <algorithm>
#include <cstdio>
#include <sstream>
#include <vector>
#include <string>
#include <cmath>

#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)

using namespace std;

typedef pair<string,int> mypair;

struct pair_sort {
  bool operator()(const  mypair& x, const mypair& y) const {
	return x.first < y.first || x.first ==  y.first && x.second < y.second;
  }
};


int main(void){

int pg;
string gk;
vector<mypair> sss;
	while(cin >> gk >> pg ){
		if( cin.eof() ) break;
		sss.push_back(mypair(gk,pg));
	}
	sort(sss.begin(),sss.end()); //,pair_sort());
	string odwd="zzz999";
	rep(i, sss.size()){
		if(sss[i].first != odwd){
			if(odwd != "zzz999") cout << endl;
			cout << sss[i].first << endl;
			cout << sss[i].second;
		}else{
			cout << " " << sss[i].second;
		}
		odwd = sss[i].first;
	}
	cout << endl;
	
	return 0;
}