#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <fstream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <cstring>
#include <assert.h>


using namespace std;


#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)  FOR(i,0,n)
#define clr(a) memset((a),0,sizeof(a))
#define nclr(a) memset((a),-1,sizeof(a))
#define pb push_back
#define INRANGE(x,s,e) ((s)<=(x) && (x)<(e))
#define MP(a,b) make_pair((a),(b))

int main(){
	int h, w, f, n, t, r;
	while(cin>>h>>w>>f,h||w||f){
		cin>>n;
		if(max({h,w,f})==f){
			t=h*h+w*w;
		}else if(max({h,w,f})==w){
			t=h*h+f*f;
		}else{
			t=w*w+f*f;
		}
		rep(i,n){
			cin>>r;
			if(4*r*r>t){
				cout<<"OK"<<endl;
			}else{
				cout<<"NA"<<endl;
			}
		}
	}
	return 0;
}