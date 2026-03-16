#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <cmath>
#include <complex>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0;i<int(n);++i)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define EPS 1e-8
#define F first
#define S second

static const double PI=6*asin(0.5);
typedef pair<double,double> P;
typedef complex<double> CP;
typedef long long ll;


int m[10][10];
int n;
int x,y;

void foo(int a,int b){
	if(a<0||a>7||b<0||b>7) return;
	if(m[a][b]==1){
		m[a][b]=0;
		rep(i,3){
			foo(a+i+1,b);
			foo(a,b+i+1);
			foo(a-i-1,b);
			foo(a,b-i-1);
		}
	}
}

int main(){
	cin>>n;
	rep(l,n){
		rep(i,8){
			rep(j,8){
				char t;
				cin>>t;
				m[i][j]=t-'0';
			}
		}
		cin>>x>>y;
		x--;
		y--;
		foo(y,x);
		cout<<"Data "<<l+1<<":"<<endl;
		rep(i,8){
			rep(j,8){
				cout<<m[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}