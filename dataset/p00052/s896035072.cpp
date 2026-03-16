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

static const double PI=6*asin(0.5);
typedef complex<double> P;
typedef long long ll;


int a2,a5;
int n;

int main(){
	while(cin>>n,n!=0){
		a2=a5=0;
		while(n!=2){
			int tmp=n;
			while(tmp%2==0){
				tmp/=2;
				a2++;
			}
			while(tmp%5==0){
				tmp/=5;
				a5++;
			}
			n--;
		}
		cout<<min(a2,a5)<<endl;
		}
	return 0;
}