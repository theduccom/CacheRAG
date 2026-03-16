#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
typedef pair<int,P> P1;
typedef pair<P,P> P2;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 2000000000
int dp[101][101];
int num[101][101];
bool comp(string a,string b){
	for(int i=0;i<min(a.size(),b.size());i++){
		if(a[i]-'a'<b[i]-'a'){
			return true;
		}else if(b[i]-'a'<a[i]-'a'){
			return false;
		}
	}
	return a.size()<b.size();
}
map<string,vector<int> >ma;
int main(){
	int cou=0;
	string str;
	int n;
	while( cin >> str !='\0'){
		scanf("%d",&n);
		ma[str].push_back(n);
	}
	map<string,vector<int> >::iterator ite;
	for(ite=ma.begin();ite!=ma.end();++ite){
		cout << ite->first << endl;
		vector<int>yu=ite->second;
		sort(yu.begin(),yu.end());
		cout << yu[0];
		for(int i=1;i<yu.size();i++){
			cout <<" " << yu[i];
		}
		cout << endl;
	}
}