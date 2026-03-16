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

string s;
string app="apple",pea="peach";

void apple(){
	int it;
	vector <int> a;
	bool f=true,update=false;
	while(it=s.find("apple"),it!=-1){
		//cout<<"it = "<<it<<endl;
		if(it!=-1){
			a.PB(it);
			rep(i,5){
				s[it+i]=pea[i];
			}
		}
	}
	//cout<<s<<endl;
	it=-1;
	while(it=s.find("peach",it+1),it!=-1){
		//cout<<it<<endl;
		f=true;
		rep(i,a.size()){
			if(a[i]==it){
				f=false;
				break;
			}
		}
		if(f){
			rep(i,5){
			s[it+i]=app[i];
			}
		}
	}
	return;
}

int main(){
	cin>>s;
	apple();
	cout<<s;
	while(cin>>s){
		apple();
		cout<<" "<<s;
	}
	cout<<endl;
	return 0;
}