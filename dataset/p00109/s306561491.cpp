#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i,a,b) for(int i = (a); i < (b); i++)

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

typedef string::const_iterator State;
class ParseError {};

int expression(State &begin);// 四則演算の式をパースして、その評価結果を返す。
int term(State &begin);// 乗算除算の式をパースして、その評価結果を返す。
int factor(State &begin);// 括弧か数をパースして、その評価結果を返す。
int number(State &begin);//数字の列をパースして、その数を返す



//数字の列をパースして、その数を返す
int number(State &begin){
	int ret =0;
	while(isdigit(*begin)){
		ret *=10;
		ret += *begin-'0';
		begin++;
	}
	return ret;
}


// 乗算除算の式をパースして、その評価結果を返す。
int term(State &begin) {
	int ret =factor(begin);

	for(;;){
		if(*begin=='*'){
			begin++;
			ret *=factor(begin);
		}else if(*begin =='/'){
			begin++;
			ret /=factor(begin);
		}else{
			break;
		}
	}
	return ret;
}
// 四則演算の式をパースして、その評価結果を返す。
int expression(State &begin) {
	int ret =term(begin);

	for(;;){
		if(*begin=='+'){
			begin++;
			ret +=term(begin);
		}else if(*begin=='-'){
			begin++;
			ret -=term(begin);
		}else{
			break;
		}
	}
	return ret;
}
// 括弧か数をパースして、その評価結果を返す。
int factor(State &begin){
	int ret = 0;
	if(*begin=='('){
		begin++;//'('を飛ばす
		ret =expression(begin);
		begin++;//')'を飛ばす
	}else{
		return number(begin);
	}
	return ret;
}


int main(){
	int n;
	cin>>n;
	cin.ignore();
	for(int i =0;i <n;i++){
		string s;
		getline(cin, s);

		State begin= s.begin();
		int ans =expression(begin);
		cout <<ans<<endl;
	}
	return 0;
}