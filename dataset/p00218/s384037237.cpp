#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <complex>
#include <cstdio>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int n,pm,pe,pj;

int main(){
	while(cin>>n){
		if(!n)return 0;
		while(n--){
			cin>>pm>>pe>>pj;
			if(pm==100||pe==100||pj==100||pm+pe>179||pm+pe+pj>239)cout<<"A"<<endl;
			else if(pm+pe+pj>209||pm+pe+pj>149&&(pm>79||pe>79))cout<<"B"<<endl;
			else cout<<"C"<<endl;
		}
	}
}