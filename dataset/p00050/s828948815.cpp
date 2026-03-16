#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>
 
#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
 
using namespace std;
 
typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;
 
const int INF=1<<29;
const double EPS=1e-9;
 
const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};

bool applecheck(string s,int i){
	bool flag = true;
	string apple = "apple";
	for(int j=0;j<5;j++){
		if(s[i+j] != apple[j]){
			flag = false;
		}
	}
	return flag;
}

bool peachcheck(string s,int i){
	bool flag = true;
	string peach = "peach";
	for(int j=0;j<5;j++){
		if(s[i+j] != peach[j]){
			flag = false;
		}
	}
	return flag;
}

int main(){
	string s;
	getline(cin, s);
	int index = 0;
	for(int i=0;i<s.length()-4;i++){
		if(applecheck(s,i)){
			cout << s.substr(index,i-index);
			cout << "peach";
			index = i+5;
			i += 5;
			continue;
		}
		if(peachcheck(s,i)){
			cout << s.substr(index,i-index);
			cout << "apple";
			index = i+5;
			i += 5;
		}
	}

	cout << s.substr(index) << endl;
}